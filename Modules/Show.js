// show.js는 각 ux page의 view에 보여지기 전 반드시 거치는 페이지이다.
// view들은 오직 이 show.js에 있는 변수들과 연결되어야한다. 예를들면 Balance
// 각종 page에서 변수들을 변경시켜주면 그것들을 Observable을 통해 수집해서 결과처리를 해낸 후 최종적으로 view로 보내는 역할을 한다.
var Observable=require("FuseJS/Observable");
var moment=require("Modules/moment");
//TODO: database로부터 최종적인 어레이를 만들어낸다. (Input)
//이건 나중에 background 작업할때 할것이므로 지금은 내가 임의로 만들겠다.
var sqlite = require('SQLite');
var db = sqlite.open("file.sqlite");
//DB로부터 data를 받아옴
var TempDB=require("Modules/tempDB");
var AccountList=require("Modules/AccountList");
var data = TempDB.data;
/* input page start*/
//inputPage의 current Balance 가공
//부메랑변수 : 변수를 page로 보내서 결과변수를 도출하는 용도 
var input_payType=Observable(1);
var input_currentAccountId=AccountList.currentAccountId;
var i_cB=Observable(0);
var input_once = Observable(false);


function CalculateBalance(data){
	balance = 0;
	for (var i = data.length - 1; i >= 0; i--) {
		item=data.getAt(i);
		if((item.payType==input_payType.value) && (item.account_id==input_currentAccountId.value))
		{
		balance=balance+item.amount;
		};
		
	};
	return balance;
}

function RenewInputCurrentBalance(){
	
	i_cB.value=CalculateBalance(data);
	
}; 


/* input page end*/ 

/* list page start */
var list_once = Observable(false);

var list_card_show = Observable(true);
var list_cash_show = Observable(true);
var list_cash_show_color = Observable("AccountBook.AccountBook.Col_type3");
var list_card_show_color = Observable("AccountBook.AccountBook.Col_type3");
//AccountList.currentAccountId
var screenDateTime = Observable(moment().format('YYYYMMDDHHmm'));
var screenYear = Observable(moment(screenDateTime.value,'YYYYMMDDHHmm',true).format('YYYY'));
var screenMonth = Observable(moment(screenDateTime.value,'YYYYMMDDHHmm',true).format('MM'));
var histories = Observable();
var list_currentBalance = Observable(0);

function ReloadHistories(){
	if(data.length!=0){
		histories.clear();
		temp1=MakeConditionalTemp1(data);// 현재 가계부,현금보기or카드보기, 를 체크해서 data 일부 채취
		temp2=MakeAtThatTimeBalanceAddedTemp(temp1);// 채취된 data로 attb계산(새로운 row를 추가한 matrix를 반환)
		temp3=MakeConditionalTemp2(temp2);// temp2(attb row가 추가됨)를 기반으로 년 월 체크해서 data 일부 채취.
		MakeDateTimeCategory(temp3);
	}else if(data.length==0){
		histories.clear();
	}
 }

function MakeConditionalTemp1(data){
	newArray=Observable();
	for (var i = data.length - 1; i >= 0; i--) {
		item=data.getAt(i);
		if (item.account_id==AccountList.currentAccountId.value){
			if (list_cash_show.value==true&&list_card_show.value==true){
				newArray.add({
				id: (item.id),
				account_id: (item.account_id),
				amount: (item.amount),
				data_time: (item.data_time),
				usage: (item.usage),
				payType: (item.payType),
				pmType: (item.pmType),
				group_id: (item.group_id),
				}); 
			}else if(list_cash_show.value==true&&list_card_show.value==false){
				if(item.payType==1){
					newArray.add({
					id: (item.id),
					account_id: (item.account_id),
					amount: (item.amount),
					data_time: (item.data_time),
					usage: (item.usage),
					payType: (item.payType),
					pmType: (item.pmType),
					group_id: (item.group_id),			
					});
				}
			}else if((list_cash_show.value==false)&&(list_card_show.value==true)){
				if(item.payType==0){
					newArray.add({
					id: (item.id),
					account_id: (item.account_id),
					amount: (item.amount),
					data_time: (item.data_time),
					usage: (item.usage),
					payType: (item.payType),
					pmType: (item.pmType),
					group_id: (item.group_id),		
					});
				}
			}else if(list_cash_show.value==false&&list_card_show.value==false){
			}
		}
	};
	return newArray;
}
function MakeConditionalTemp2(data){
	newArray=Observable();
	for (var i = 0; i <= data.length - 1; i++) {
		item=data.getAt(i);
		if (item.account_id==AccountList.currentAccountId.value){
			if (screenYear.value*1==(moment(item.data_time,'YYYYMMDDHHmm',true).format('YYYY'))*1){
				if (screenMonth.value*1==(moment(item.data_time,'YYYYMMDDHHmm',true).format('MM'))*1){
					newArray.add({
						id: (item.id),
						account_id: (item.account_id),
						amount: (item.amount),
						data_time: (item.data_time),
						usage: (item.usage),
						payType: (item.payType),
						pmType: (item.pmType),
						attb: (item.attb),
						group_id: (item.group_id),
					}); 
				}
			}
		}
	};
	return newArray;
}
function MakeAtThatTimeBalanceAddedTemp(data1){
	newArray=Observable();
	for (var i = 0; i <= data1.length - 1; i++)
	{
		item=data1.getAt(i);
		tempATTB=0; 
		for (var j = data1.length - 1; j >= i; j--)
		{
			item2=data1.getAt(j);
			tempATTB=tempATTB+item2.amount;
		};
		if (item.pmType=="+"){
			newArray.add({
			id: (item.id),
			account_id: (item.account_id),
			amount: (item.amount),
			data_time: (item.data_time),
			usage: (item.usage),
			payType: (item.payType),
			pmType: (item.pmType),
			attb: (tempATTB),
			group_id: (item.group_id)
			});
		}else if(item.pmType=="-"){
			newArray.add({
			id: (item.id),
			account_id: (item.account_id),
			amount: (item.amount),
			data_time: (item.data_time),
			usage: (item.usage),
			payType: (item.payType),
			pmType: (item.pmType),
			attb: (tempATTB),
			group_id: (item.group_id)
			});
		}
	};
	list_currentBalance.value = 0;
	for (var i = newArray.length - 1; i >= 0; i--) {
		list_currentBalance.value = list_currentBalance.value + newArray.getAt(i).amount
	}
	return newArray;
}

function MakeDateTimeCategory(data){
	newArray=Observable();
	dayCount=0;
	count=0;
	for (var i = 0; i <= data.length - 1; i++) {
		item=data.getAt(i);
		if(item.group_id>=1){
			group_color="#000000"
		}else if(item.group_id==0){
			group_color="#ffffff"
		}

		if (data.length==1){

			histories.add({
				day:Observable(1*moment(item.data_time,'YYYYMMDDHHmm',true).format('DD')),
				day_visibility:Observable("Visible"),
				histOfTheDay: Observable()
			})
			histories.value.histOfTheDay.add({
				vars: Observable(),
				vars_visibility: Observable("Visible"),
				vars_color: Observable("#ffffff"),
				info: [dayCount,count]
			})
			histories.value.histOfTheDay.value.vars.add({
				normal: Observable(),
				attb: Observable(item.attb),
				attb_visibility: Observable("Collapsed")
			})
			histories.value.histOfTheDay.value.vars.value.normal.add({
				id: item.id,
				account_id: item.account_id,
				amount: item.amount,
				data_time: moment(item.data_time,'YYYYMMDDHHmm',true).format('a h:mm'),
				usage: item.usage,
				payType: item.payType,
				pmType: item.pmType,
				attb: tempATTB,
				group_id: Observable(item.group_id),
				group_color: Observable(group_color),
			})

		}else if(data.length>=2){
			if(i==0){
				currentDay=1*moment(item.data_time,'YYYYMMDDHHmm',true).format('DD')
				histories.add({
					day:Observable(currentDay),
					day_visibility:Observable("Visible"),
					histOfTheDay: Observable()
				})
				histories.value.histOfTheDay.add({
					vars: Observable(),
					vars_visibility: Observable("Visible"),
					vars_color: Observable("#ffffff"),
					info: [dayCount,count]
				})
				histories.value.histOfTheDay.value.vars.add({
					normal: Observable(),
					attb: Observable(item.attb),
					attb_visibility: Observable("Collapsed")
				})
				histories.value.histOfTheDay.value.vars.value.normal.add({
					id: item.id,
					account_id: item.account_id,
					amount: item.amount,
					data_time: moment(item.data_time,'YYYYMMDDHHmm',true).format('a h:mm'),
					usage: item.usage,
					payType: item.payType,
					pmType: item.pmType,
					attb: tempATTB,
					group_id: Observable(item.group_id),
					group_color: Observable(group_color),
				})

			}else if( i>0 && i<=data.length-1){
				upperItem=data.getAt(i-1);
				upperItemDay=1*moment(upperItem.data_time,'YYYYMMDDHHmm',true).format('DD');
				currentDay=1*moment(item.data_time,'YYYYMMDDHHmm',true).format('DD');
				if(upperItemDay != currentDay){
					dayCount=dayCount+1;
					count=0;
					//새로운 day추가
					histories.add({
						day:Observable(currentDay),
						day_visibility:Observable("Visible"),
						histOfTheDay: Observable()
					})
					histories.getAt(dayCount).histOfTheDay.add({
						vars: Observable(),
						vars_visibility: Observable("Visible"),
						vars_color: Observable("#ffffff"),
						info: [dayCount,count]
					})
					histories.getAt(dayCount).histOfTheDay.getAt(count).vars.add({
						normal: Observable(),
						attb: Observable(item.attb),
						attb_visibility: Observable("Collapsed")
					})
					histories.getAt(dayCount).histOfTheDay.getAt(count).vars.value.normal.add({
						id: item.id,
						account_id: item.account_id,
						amount: item.amount,
						data_time: moment(item.data_time,'YYYYMMDDHHmm',true).format('a h:mm'),
						usage: item.usage,
						payType: item.payType,
						pmType: item.pmType,
						attb: item.attb,
						group_id: Observable(item.group_id),
						group_color: Observable(group_color),
					})
					

				}else{
					//위 아래의 day차이가 없을 경우엔 day추가 없이 그냥 추가
					histories.getAt(dayCount).histOfTheDay.add({
						vars: Observable(),
						vars_visibility: Observable("Visible"),
						vars_color: Observable("#ffffff"),
						info: [dayCount,count+1]
					})
					count=count+1;
					histories.getAt(dayCount).histOfTheDay.getAt(count).vars.add({
						normal: Observable(),
						attb: Observable(item.attb),
						attb_visibility: Observable("Collapsed")
					})
					histories.getAt(dayCount).histOfTheDay.getAt(count).vars.value.normal.add({
						id: item.id,
						account_id: item.account_id,
						amount: item.amount,
						data_time: moment(item.data_time,'YYYYMMDDHHmm',true).format('a h:mm'),
						usage: item.usage,
						payType: item.payType,
						pmType: item.pmType, 
						attb: item.attb,
						group_id: Observable(item.group_id),
						group_color: Observable(group_color),
					})
					
				}
			}
		}
	}
}

/* list page end */	
/* statistic page start */
var statistic_once = Observable(false);
var screen_spcf_datetime = Observable(moment().format('YYYYMMDDHHmm'));
var screen_spcf_datetime_num=Observable(1*moment(screen_spcf_datetime.value,'YYYYMMDDHHmm',true).format('YYYYMMDD'));
var screen_spcf_datetime_string=Observable(moment(screen_spcf_datetime.value,'YYYYMMDDHHmm',true).format('YYYY/MM/DD'));
var spcf_input_total = Observable(0);
var spcf_output_total = Observable(0);

function CalculateSpcfTotal(){
	spcf_input_total.value=0;
	spcf_output_total.value=0;
	temp_group_sum=0;
	if(data.length!=0){
		for (var i = data.length - 1; i >= 0; i--) {
			item = data.getAt(i);
			item_datetime = 1*moment(item.data_time,'YYYYMMDDHHmm',true).format('YYYYMMDD')
			if(AccountList.currentAccountId.value==item.account_id){	
				if (item.group_id==0 && item_datetime==screen_spcf_datetime_num.value) {
					if (item.pmType=="+"){
						spcf_input_total.value = spcf_input_total.value+item.amount;
					}else if (item.pmType=="-"){
						spcf_output_total.value = spcf_output_total.value+item.amount;
					}
				}
			}
		}
		for (var i = TempDB.tempGroupIdList.length - 1; i >= 0; i--) {
			temp_group_sum=0;
			group_id = TempDB.tempGroupIdList.getAt(i).id
			for (var j = data.length - 1; j >= 0; j--) {
				item = data.getAt(j);
				item_datetime = 1*moment(item.data_time,'YYYYMMDDHHmm',true).format('YYYYMMDD')
				if(AccountList.currentAccountId.value==item.account_id){	
					if (item.group_id==group_id && item_datetime==screen_spcf_datetime_num.value) {
						temp_group_sum=temp_group_sum+item.amount;					
					}
				}
			}
			if(temp_group_sum>=0){
				spcf_input_total.value = spcf_input_total.value+temp_group_sum;
			}else if(temp_group_sum<0){
				spcf_output_total.value = spcf_output_total.value+temp_group_sum;
			}	
		}
	}
}
// 

var screen_intv_tot_datetime_left_string = Observable(moment().subtract(7,'days').format('YYYY/MM/DD'));
var screen_intv_tot_datetime_right_string = Observable(moment().format('YYYY/MM/DD'))
var screen_intv_tot_datetime_left_num = Observable(1*moment().subtract(7,'days').format('YYYYMMDD'));
var screen_intv_tot_datetime_right_num = Observable(1*moment().format('YYYYMMDD'));

var intv_tot_input_total = Observable(0);
var intv_tot_output_total = Observable(0);

function CalculateIntervalTotal(){
	intv_tot_input_total.value=0;
	intv_tot_output_total.value=0;
	intv_tot_temp_group_sum=0;
	if(data.length!=0){
		for (var i = data.length - 1; i >= 0; i--) {
			item = data.getAt(i);
			item_datetime = 1*moment(item.data_time,'YYYYMMDDHHmm',true).format('YYYYMMDD')
			if(AccountList.currentAccountId.value==item.account_id){	
				if ( (item.group_id==0) && (item_datetime>=screen_intv_tot_datetime_left_num.value) && (item_datetime<=screen_intv_tot_datetime_right_num.value)) {
					if (item.pmType=="+"){
						intv_tot_input_total.value = intv_tot_input_total.value+item.amount;
					}else if (item.pmType=="-"){
						intv_tot_output_total.value = intv_tot_output_total.value+item.amount;
					}
				}
			}
		}
		for (var i = TempDB.tempGroupIdList.length - 1; i >= 0; i--) {
			intv_tot_temp_group_sum=0;
			group_id = TempDB.tempGroupIdList.getAt(i).id
			for (var j = data.length - 1; j >= 0; j--) {
				item = data.getAt(j);
				item_datetime = 1*moment(item.data_time,'YYYYMMDDHHmm',true).format('YYYYMMDD')
				if(AccountList.currentAccountId.value==item.account_id){	
					if (item.group_id==group_id && (item_datetime>=screen_intv_tot_datetime_left_num.value) && (item_datetime<=screen_intv_tot_datetime_right_num.value)) {
						intv_tot_temp_group_sum=intv_tot_temp_group_sum+item.amount;					
					}
				}
			}
			if(intv_tot_temp_group_sum>=0){
				intv_tot_input_total.value = intv_tot_input_total.value+intv_tot_temp_group_sum;
			}else if(intv_tot_temp_group_sum<0){
				intv_tot_output_total.value = intv_tot_output_total.value+intv_tot_temp_group_sum;
			}	
		}
	}
}

var screen_item_tot_datetime_left_string = Observable(moment().subtract(7,'days').format('YYYY/MM/DD'));
var screen_item_tot_datetime_right_string = Observable(moment().format('YYYY/MM/DD'))
var screen_item_tot_datetime_left_num = Observable(1*moment().subtract(7,'days').format('YYYYMMDD'));
var screen_item_tot_datetime_right_num = Observable(1*moment().format('YYYYMMDD'));

var item_tot_input_total = Observable(0);
var item_tot_output_total = Observable(0);
var selected_item = Observable("");

function CalculateIntervalItemTotal(){
	item_tot_input_total.value=0;
	item_tot_output_total.value=0;
	item_tot_temp_group_sum=0;
	if(data.length!=0){
		for (var i = data.length - 1; i >= 0; i--) {
			item = data.getAt(i);
			item_datetime = 1*moment(item.data_time,'YYYYMMDDHHmm',true).format('YYYYMMDD')
			if(AccountList.currentAccountId.value==item.account_id){	
				if ((item_datetime>=screen_item_tot_datetime_left_num.value) && (item_datetime<=screen_item_tot_datetime_right_num.value)) {
					if((item.group_id==0) && (item.usage==selected_item.value)){
						if (item.pmType=="+"){
							item_tot_input_total.value = item_tot_input_total.value+item.amount;
						}else if (item.pmType=="-"){
							item_tot_output_total.value = item_tot_output_total.value+item.amount;
						}
					}
				}
			}
		}
		for (var i = TempDB.tempGroupIdList.length - 1; i >= 0; i--) {
			item_tot_temp_group_sum=0;
			group_id = TempDB.tempGroupIdList.getAt(i).id
			for (var j = data.length - 1; j >= 0; j--) {
				item = data.getAt(j);
				item_datetime = 1*moment(item.data_time,'YYYYMMDDHHmm',true).format('YYYYMMDD')
				if(AccountList.currentAccountId.value==item.account_id){
					if(item.group_id==group_id && item.usage==selected_item.value){
						if (item.group_id==group_id && (item_datetime>=screen_item_tot_datetime_left_num.value) && (item_datetime<=screen_item_tot_datetime_right_num.value)) {
							item_tot_temp_group_sum=item_tot_temp_group_sum+item.amount;					
						}
					}
				}
			}
			if(item_tot_temp_group_sum>=0){
				item_tot_input_total.value = item_tot_input_total.value+item_tot_temp_group_sum;
			}else if(item_tot_temp_group_sum<0){
				item_tot_output_total.value = item_tot_output_total.value+item_tot_temp_group_sum;
			}	
		}
	}
}

/* statistic page end */
/* budget page start */
var screen_out_budget_datetime_left_num =Observable();
var screen_out_budget_datetime_right_num= Observable();
var screen_out_budget_datetime_left_string= Observable();
var screen_out_budget_datetime_right_string= Observable();
var budget_title = Observable("");
var goal_output = Observable(0);
var current_budget_id = Observable();
var inspector = Observable(true);
getBudgetOutVarsFromDB();
function getBudgetOutVarsFromDB(){
	for (var i = TempDB.tempBudgetOut.length - 1; i >= 0; i--) {
		item=TempDB.tempBudgetOut.getAt(i);
		if(i==(TempDB.tempBudgetOut.length-1)){
			inspector.value=true;
		}
		//inspector는 bool값을 어레이의 원소들로 가진다. 현재 어카운트 아이디로 된 tempBudgetOut의 원소가 하나도 없다면 하나 생성한다.
		inspector.value = (inspector.value && !(item.account_id*1==AccountList.currentAccountId.value))
		if(item.account_id*1==AccountList.currentAccountId.value){
			budget_title.value=item.title;
			screen_out_budget_datetime_left_string.value=item.left_date;
			screen_out_budget_datetime_right_string.value=item.right_date;
			goal_output.value = item.goal*1

			screen_out_budget_datetime_left_num.value=moment(screen_out_budget_datetime_left_string.value,'YYYY/MM/DD',true).format('YYYYMMDD')*1
			screen_out_budget_datetime_right_num.value=moment(screen_out_budget_datetime_right_string.value,'YYYY/MM/DD',true).format('YYYYMMDD')*1
			current_budget_id.value=item.id*1;
		}
	}
	if(inspector.value == true){
		db.execute("insert into BUDGET_OUT (account_id,title,left_date,right_date,goal) values("+AccountList.currentAccountId.value+", 'New Output Budget', '"+moment().format('YYYY/MM/DD')+"', '"+moment().format('YYYY/MM/DD')+"', 0)");
		TempDB.getBudgetOutDB();
		for (var i = TempDB.tempBudgetOut.length - 1; i >= 0; i--) {
			item2=TempDB.tempBudgetOut.getAt(i);
			if(item2.account_id*1==AccountList.currentAccountId.value){
				budget_title.value=item2.title;
				screen_out_budget_datetime_left_string.value=item2.left_date;
				screen_out_budget_datetime_right_string.value=item2.right_date;
				goal_output.value = item2.goal*1

				screen_out_budget_datetime_left_num.value=moment(screen_out_budget_datetime_left_string.value,'YYYY/MM/DD',true).format('YYYYMMDD')*1
				screen_out_budget_datetime_right_num.value=moment(screen_out_budget_datetime_right_string.value,'YYYY/MM/DD',true).format('YYYYMMDD')*1
				current_budget_id.value=item2.id*1;
			}
		}
	}

}
var budget_today_datetime_num=Observable(moment().format('YYYYMMDD')*1)
var budget_today_datetime_string=Observable(moment().format('YYYY/MM/DD'))

var day_left = Observable(0);
var week_left = Observable(0);
var month_left = Observable(0);
var year_left = Observable(0);

var day_out_limit = Observable(0);
var week_out_limit = Observable(0);
var month_out_limit = Observable(0);
var year_out_limit = Observable(0);

var left_to_right = Observable(0); 
var left_to_now = Observable(0);
var now_to_right = Observable(0);

var output_so_far = Observable(0);

SetLeftToRight(screen_out_budget_datetime_left_string.value,screen_out_budget_datetime_right_string.value);
SetLeftToNow(screen_out_budget_datetime_left_string.value,budget_today_datetime_string.value)
SetNowToRight(budget_today_datetime_string.value,screen_out_budget_datetime_right_string.value)

CalculateBudgetIntervalTotal();
RenewOutputTable();

function CalculateBudgetIntervalTotal(){
	output_so_far.value=0;
	budget_out_temp_group_sum=0;
	budget_yesterday_datetime_num = moment(budget_today_datetime_string.value,'YYYY/MM/DD',true).subtract(1,'day').format('YYYYMMDD')*1;
	if(data.length!=0){
		for (var i = data.length - 1; i >= 0; i--) {
			item = data.getAt(i);
			item_datetime = 1*moment(item.data_time,'YYYYMMDDHHmm',true).format('YYYYMMDD')
			if(AccountList.currentAccountId.value==item.account_id){
				if ( (item.group_id==0) && (item_datetime>=screen_out_budget_datetime_left_num.value) && (item_datetime<=budget_yesterday_datetime_num)) {
					if (item.pmType=="-"){
						output_so_far.value = output_so_far.value+item.amount;
					}
				}
			}
		}
		for (var i = TempDB.tempGroupIdList.length - 1; i >= 0; i--) {
			budget_out_temp_group_sum=0;
			group_id = TempDB.tempGroupIdList.getAt(i).id
			for (var j = data.length - 1; j >= 0; j--) {
				item = data.getAt(j);
				item_datetime = 1*moment(item.data_time,'YYYYMMDDHHmm',true).format('YYYYMMDD')
				if(AccountList.currentAccountId.value==item.account_id){	
					if (item.group_id==group_id && (item_datetime>=screen_out_budget_datetime_left_num.value) && (item_datetime<=budget_yesterday_datetime_num)) {
						budget_out_temp_group_sum=budget_out_temp_group_sum+item.amount;					
					}
				}
			}
			if(budget_out_temp_group_sum>=0){

			}else if(budget_out_temp_group_sum<0){
				output_so_far.value = output_so_far.value+budget_out_temp_group_sum;
			}	
		}
	}
}

function RenewOutputTable(){
	getBudgetOutVarsFromDB();
	SetLeftToRight(screen_out_budget_datetime_left_string.value,screen_out_budget_datetime_right_string.value);
	SetLeftToNow(screen_out_budget_datetime_left_string.value,budget_today_datetime_string.value)
	SetNowToRight(budget_today_datetime_string.value,screen_out_budget_datetime_right_string.value)
	CalculateBudgetIntervalTotal();

	day_left.value = now_to_right.value;
	week_left.value = Math.round(now_to_right.value/7 * 1000) / 1000;
	month_left.value = Math.round(now_to_right.value/30 * 1000) / 1000;
	year_left.value = Math.round(now_to_right.value/365 * 1000) / 1000;

	day_out_limit.value = Math.round((goal_output.value*1+output_so_far.value) /(day_left.value/1));
	week_out_limit.value = Math.round((goal_output.value*1+output_so_far.value)/(day_left.value/7));
	month_out_limit.value = Math.round((goal_output.value*1+output_so_far.value)/(day_left.value/30));
	year_out_limit.value = Math.round((goal_output.value*1+output_so_far.value)/(day_left.value/365));
}

function SetLeftToRight(left_string,right_string){
	left_num=moment(left_string,'YYYY/MM/DD',true).format('YYYYMMDD')*1;
	right_num=moment(right_string,'YYYY/MM/DD',true).format('YYYYMMDD')*1;
	count=0;
	if(left_num<=right_num){
		added_left_string = left_string;
		while (right_string!=added_left_string){
			count=count+1;
			added_left_string=moment(added_left_string,'YYYY/MM/DD',true).add(1,'day').format('YYYY/MM/DD');
		}
		left_to_right.value = count+1;
	}
}

function SetLeftToNow(left_string,now_string){
	left_num=moment(left_string,'YYYY/MM/DD',true).format('YYYYMMDD')*1;
	now_num=moment(now_string,'YYYY/MM/DD',true).format('YYYYMMDD')*1;
		if(left_num<=now_num){
		count=0;
		added_left_string = left_string;
		while (now_string!=added_left_string){
			count=count+1;
			added_left_string=moment(added_left_string,'YYYY/MM/DD',true).add(1,'day').format('YYYY/MM/DD');
		}
		left_to_now.value = count+1;
	}
}

function SetNowToRight(now_string,right_string){
	now_num=moment(now_string,'YYYY/MM/DD',true).format('YYYYMMDD')*1;
	right_num=moment(right_string,'YYYY/MM/DD',true).format('YYYYMMDD')*1;
	if(now_num<=right_num){
		count=0;
		added_now_string = now_string;
		while (right_string!=added_now_string){
			count=count+1;
			added_now_string=moment(added_now_string,'YYYY/MM/DD',true).add(1,'day').format('YYYY/MM/DD');
		}
		now_to_right.value = count+1;
	}
}
/* budget page end */

module.exports={
	data,

 	input_payType: input_payType,
 	input_currentAccountId: input_currentAccountId,
 	RenewInputCurrentBalance: RenewInputCurrentBalance,
 	i_cB: i_cB,

 	list_currentBalance,
 	list_card_show: list_card_show,
 	list_cash_show: list_cash_show,
 	list_card_show_color: list_card_show_color,
 	list_cash_show_color: list_cash_show_color,
 	screenDateTime: screenDateTime,
 	screenMonth: screenMonth,
 	screenYear: screenYear,
 	histories: histories,
 	ReloadHistories: ReloadHistories,

 	screen_spcf_datetime_string: screen_spcf_datetime_string,
 	screen_spcf_datetime_num: screen_spcf_datetime_num,
 	spcf_output_total: spcf_output_total,
 	spcf_input_total: spcf_input_total,
 	CalculateSpcfTotal: CalculateSpcfTotal,

 	screen_intv_tot_datetime_right_num: screen_intv_tot_datetime_right_num,
 	screen_intv_tot_datetime_left_num: screen_intv_tot_datetime_left_num,
 	screen_intv_tot_datetime_right_string: screen_intv_tot_datetime_right_string,
 	screen_intv_tot_datetime_left_string: screen_intv_tot_datetime_left_string,
 	intv_tot_input_total: intv_tot_input_total,
 	intv_tot_output_total: intv_tot_output_total,
 	CalculateIntervalTotal: CalculateIntervalTotal,

 	screen_item_tot_datetime_right_num: screen_item_tot_datetime_right_num,
 	screen_item_tot_datetime_left_num: screen_item_tot_datetime_left_num,
 	screen_item_tot_datetime_right_string: screen_item_tot_datetime_right_string,
 	screen_item_tot_datetime_left_string: screen_item_tot_datetime_left_string,
 	item_tot_input_total: item_tot_input_total,
 	item_tot_output_total: item_tot_output_total,
 	CalculateIntervalItemTotal: CalculateIntervalItemTotal,
 	selected_item: selected_item,

 	screen_out_budget_datetime_left_num,
	screen_out_budget_datetime_right_num,
	screen_out_budget_datetime_left_string,
	screen_out_budget_datetime_right_string,
	budget_today_datetime_num,
	budget_today_datetime_string,

 	list_once: list_once,
 	input_once: input_once,
 	statistic_once: statistic_once,

 	SetLeftToRight,
	SetLeftToNow,
	SetNowToRight,
	RenewOutputTable,
	left_to_now,
	left_to_right,
	now_to_right,
	SetLeftToRight,
	SetNowToRight,
	SetLeftToNow,
	day_left,
	week_left,
	month_left,
	year_left,
	goal_output,
	day_out_limit,
	week_out_limit,
	month_out_limit,
	year_out_limit,
	budget_title,
	current_budget_id,
	output_so_far,

 };
