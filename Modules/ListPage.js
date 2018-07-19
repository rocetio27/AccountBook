var Observable = require("FuseJS/Observable");
var Show = require("Modules/Show");
var histories=Show.histories;
var moment = require("Modules/moment");
var once = Show.list_once.value;
var TempDB = require("Modules/tempDB");
var sqlite = require('SQLite');
var db = sqlite.open("file.sqlite");
// start grouping script
var firstClickedItemGroupId = 0;
var firstClickedItemId = 0;
var grouping_activation = Observable(false);
var clicked_item_for_grouping;
var groupClickCount=0;
var groupIdChangeTo=0;
function GetInGroupingMode(){
	if(firstClickedItemGroupId==0){
		histories.getAt(clicked_item_for_grouping.info[0]).histOfTheDay.getAt(clicked_item_for_grouping.info[1]).vars_color.value="#888888"
		groupClickCount=1;
	}else if(firstClickedItemGroupId>=1){
		groupClickCount=0;
		for (var i = 0; i <= histories.length - 1; i++) {
			for (var j = 0; j <= histories.getAt(i).histOfTheDay.length - 1; j++) {
				item_groud_id=histories.getAt(i).histOfTheDay.getAt(j).vars.value.normal.value.group_id.value
				item_id=histories.getAt(i).histOfTheDay.getAt(j).vars.value.normal.value.id
				if(item_groud_id==firstClickedItemGroupId){
					histories.getAt(i).histOfTheDay.getAt(j).vars_color.value="#888888"
					groupClickCount=groupClickCount+1;
				}
			}
		}
	}
	grouping_activation.value=true;
}

function GroupingConfirm(){
	if(groupClickCount == 1 && firstClickedItemGroupId==0){
		//nothing to do
	}else if(groupClickCount >= 2 || (groupClickCount==1 && firstClickedItemGroupId>=1)){
		dbexistance=false;
		for (var i = 0; i <= histories.length - 1; i++) {
			for (var j = 0; j <= histories.getAt(i).histOfTheDay.length - 1; j++) {
				group_id=histories.getAt(i).histOfTheDay.getAt(j).vars.value.normal.value.group_id
				vars_color=histories.getAt(i).histOfTheDay.getAt(j).vars_color
				id=histories.getAt(i).histOfTheDay.getAt(j).vars.value.normal.value.id
				if(firstClickedItemGroupId==0){
					if(group_id.value==0 && vars_color.value=="#ffffff"){
						//nothing to do
					}else if(group_id.value==0 && vars_color.value=="#888888"){
						if(dbexistance==false){
						TempDB.AddGroupIdListDB();
						groupIdChangeTo=TempDB.groupSize.value;

						dbexistance=true;
						}
						// group_id.value=groupIdChangeTo;
						db.execute("update DATA set group_id = "+groupIdChangeTo+" where id = "+id);
					}
				}else if(firstClickedItemGroupId>=1){
					if(group_id.value==firstClickedItemGroupId && vars_color.value=="#ffffff"){
						db.execute("update DATA set group_id = 0 where id = "+id);
					}else if(group_id.value==0 && vars_color.value=="#888888"){
						// group_id.value = firstClickedItemGroupId;
						db.execute("update DATA set group_id = "+firstClickedItemGroupId+" where id = "+id);
					}else if(group_id.value==firstClickedItemGroupId && vars_color.value=="#888888" && groupClickCount==1){
						db.execute("update DATA set group_id = 0 where id = "+id);
					}
				}			
			}
		}
	}
	grouping_activation.value=false;
	TempDB.getDB();
	TempDB.getGroupIdListDB();
	Show.ReloadHistories();
	Show.CalculateSpcfTotal();
	Show.CalculateIntervalTotal();
	Show.CalculateIntervalItemTotal();
}
// end grouping script
list_cash_show=Show.list_cash_show;
list_card_show=Show.list_card_show;
list_cash_show_color=Show.list_cash_show_color;
list_card_show_color=Show.list_card_show_color;

if(once == false){
	Show.list_once.value = true;
	Show.ReloadHistories();
	list_cash_show.value=true;
	list_card_show.value=true;
	list_cash_show_color.value="#FFBD00";
	list_card_show_color.value="#FFBD00"
}

var currentBalance=Show.list_currentBalance;

function ChangeListCashShow(){
	if(list_cash_show.value==false){
		list_cash_show_color.value="#FFBD00";
		list_cash_show.value=true;
		Show.ReloadHistories();
	}else if(list_cash_show.value==true){
		list_cash_show.value=false;
		list_cash_show_color.value="#fff";
		Show.ReloadHistories();
	}
}

function ChangeListCardShow(){
	if(list_card_show.value==false){
		list_card_show_color.value="#FFBD00";
		list_card_show.value=true;
		Show.ReloadHistories();
	}else if(list_card_show.value==true){
		list_card_show_color.value="#fff";
		list_card_show.value=false;
		Show.ReloadHistories();
	}
}

function ClickNormal(arg){
	if (grouping_activation.value==false) {
		var clicked_item=arg.data;
		target=histories.getAt(clicked_item.info[0]).histOfTheDay.getAt(clicked_item.info[1]).vars.value.attb_visibility.value;
		if(target=="Collapsed"){
			histories.getAt(clicked_item.info[0]).histOfTheDay.getAt(clicked_item.info[1]).vars.value.attb_visibility.value="Visible";
		}else if(target=="Visible"){
			histories.getAt(clicked_item.info[0]).histOfTheDay.getAt(clicked_item.info[1]).vars.value.attb_visibility.value="Collapsed";
		}
	}else if(grouping_activation.value==true){
		var clicked_item=arg.data;
		target=histories.getAt(clicked_item.info[0]).histOfTheDay.getAt(clicked_item.info[1]).vars_color.value;
		clicked_normal=histories.getAt(clicked_item.info[0]).histOfTheDay.getAt(clicked_item.info[1]).vars.value.normal.value;
		if(clicked_normal.group_id.value==0){
			groupClickCount=1;
			if(target=='#ffffff'){
				histories.getAt(clicked_item.info[0]).histOfTheDay.getAt(clicked_item.info[1]).vars_color.value="#888888";
				groupClickCount = groupClickCount + 1;
			}else if(target=='#888888'){
				histories.getAt(clicked_item.info[0]).histOfTheDay.getAt(clicked_item.info[1]).vars_color.value="#ffffff";
				groupClickCount = groupClickCount - 1;
			}
		}else if(clicked_normal.group_id.value>=1){
			if(clicked_normal.group_id.value==firstClickedItemGroupId){
				if(target=='#ffffff'){
					histories.getAt(clicked_item.info[0]).histOfTheDay.getAt(clicked_item.info[1]).vars_color.value="#888888";
					groupClickCount = groupClickCount + 1;
				}else if(target=='#888888'){
					histories.getAt(clicked_item.info[0]).histOfTheDay.getAt(clicked_item.info[1]).vars_color.value="#ffffff";
					groupClickCount = groupClickCount - 1;
				}
			}else if(clicked_normal.group_id.value!=firstClickedItemGroupId){
				//nothing to do
			}
		}	
	}
}

function LongClickNormal(arg){
	var clicked_item=arg.data;
	clicked_item_for_grouping=arg.data;
	item=histories.getAt(clicked_item.info[0]).histOfTheDay.getAt(clicked_item.info[1]).vars.value.normal.value;
	year=Show.screenYear.value*1
	month=Show.screenMonth.value*1
	day=histories.getAt(clicked_item.info[0]).day.value;
	console.log("day:"+day);
	abstract=moment(item.data_time,'a h:mm',true).format('a');
	hour=moment(item.data_time,'a h:mm',true).format('h')*1;
	minute=moment(item.data_time,'a h:mm',true).format('mm')*1;
	data_time=moment(Show.screenYear+Show.screenMonth+day+item.data_time,'YYYYMMDDa h:mm').format('YYYYMMDDHHmm');
	console.log("data_time:"+data_time);
	usage=item.usage;
	if(item.amount>=0){
		amount=item.amount;
	}else if(item.amount<0){
		amount=-1*item.amount;
	}
	pmType=item.pmType;
	if(item.payType==1){
		payType="현금"
	}else if(item.payType==0){
		payType="카드"
	}
	
	console.log("editVars[0].pmType :: "+editVars[0].pmType)
	console.log("editVars[0].pmType.value :: "+editVars[0].pmType.value)
	editVars[0].id.value=item.id
	editVars[0].year.value=year;
	editVars[0].month.value=month;
	editVars[0].day.value=day;
	editVars[0].abstract.value=abstract;
	editVars[0].hour.value=hour;
	editVars[0].minute.value=minute;
	editVars[0].usage.value=usage;
	editVars[0].amount.value=amount;
	editVars[0].pmType.value=pmType;
	editVars[0].payType.value=payType;
	editVars[0].payTypeForEdit.value=item.payType;
	editVars[0].data_time.value=data_time;
	editVars[0].account_id.value=item.account_id;
	editVars[0].group_id.value=item.group_id.value;
	//grouping을 위한 부분
	firstClickedItemId=editVars[0].id.value;
	firstClickedItemGroupId=editVars[0].group_id.value;
}

function ClickDay(arg){
	var clicked_item=arg.data
	// observable list: arg.data.histOfTheDay
	for (var i = arg.data.histOfTheDay.length - 1; i >= 0; i--) {
		target=arg.data.histOfTheDay.getAt(i).vars_visibility.value;
		if(target=="Visible"){
			arg.data.histOfTheDay.getAt(i).vars_visibility.value="Collapsed"
			arg.data.histOfTheDay.getAt(i).vars.value.attb_visibility.value="Collapsed"
		}else if(target=="Collapsed"){
			arg.data.histOfTheDay.getAt(i).vars_visibility.value="Visible"	
		}
	}
	
}

function Click_rArrow(){
	screenYearMonth=Show.screenYear.value+Show.screenMonth.value;
	Show.screenDateTime.value = moment(screenYearMonth,'YYYYMM',true).add(1,'months');
	Show.screenMonth.value = moment(Show.screenDateTime.value,'YYYYMM',true).format('MM');
	Show.screenYear.value = moment(Show.screenDateTime.value,'YYYYMM',true).format('YYYY');
	Show.ReloadHistories();
}
function Click_lArrow(){
	screenYearMonth=Show.screenYear.value+Show.screenMonth.value;
	Show.screenDateTime.value = moment(screenYearMonth,'YYYYMM',true).subtract(1,'month');
	Show.screenMonth.value = moment(Show.screenDateTime.value,'YYYYMM',true).format('MM');
	Show.screenYear.value = moment(Show.screenDateTime.value,'YYYYMM',true).format('YYYY');
	Show.ReloadHistories();
}

var editVars = [{
	id: Observable(),
	amount: Observable(0),
	account_id: Observable(),

	year: Observable(2017),
	month: Observable(06),
	day: Observable(12),
	hour: Observable(23),
	minute: Observable(55),
	abstract: Observable("am"),
	
	usage: Observable("none"),
	payType: Observable("현금"),
	pmType: Observable("+"),

	payTypeForEdit: Observable(1),
	data_time: Observable(),
	group_id: Observable(),
}]


function EditYearHandler(arg) {
	if(arg.value*1>9999){
		editVars[0].year.value = 9999
	}else if(arg.value=="00"){
		editVars[0].year.value = 0
	}
}

function EditMonthHandler(arg) {
	if(arg.value*1>12){
		editVars[0].month.value=editVars[0].month.value/10-(editVars[0].month.value/10)%1
	}else if(arg.value*1<0){
		editVars[0].month.value=1
	}else if(arg.value=="0"){
		editVars[0].month.value=1
	}
	//editVars[0].day.value=1; 
}

function EditDayHandler(arg) {
	var firstdayofyearmonth=moment(""+editVars[0].year.value+editVars[0].month.value,'YYYYM',true).format('YYYYMM01');
	var lastdayofyearmonth=moment(firstdayofyearmonth,'YYYYMMDD',true).add(1,'months').subtract(1,'day');
	var lastday=moment(lastdayofyearmonth,'YYYYMMDD',true).format('DD');
	if(arg.value*1>1*lastday){
		editVars[0].day.value=editVars[0].day.value/10-(editVars[0].day.value/10)%1
	}else if(arg.value*1<0){
		editVars[0].day.value=1
	}else if(arg.value=="0"){
		editVars[0].day.value=1
	}
}

function EditHourHandler(arg) {
	if(arg.value*1>12){
		editVars[0].hour.value=editVars[0].hour.value/10-(editVars[0].hour.value/10)%1
	}else if(arg.value*1<0){
		editVars[0].hour.value=1
	}else if(arg.value=="0"){
		editVars[0].hour.value=1
	}
}

function EditMinuteHandler(arg) {
	if(arg.value*1>59){
		editVars[0].minute.value=editVars[0].minute.value/10-(editVars[0].minute.value/10)%1
	}else if(arg.value*1<0){
		editVars[0].minute.value=1
	}else if(arg.value == "00"){
		editVars[0].minute.value = "0"
	}
}

function ClickEditpmtypeButton(arg){
	console.log("arg.data :"+arg.data.pmType.value)
	if(arg.data.pmType.value=="+"){
		arg.data.pmType.value="-"
	}else if(arg.data.pmType.value=="-"){
		arg.data.pmType.value="+"
	}
}

function ClickEditpaytypeButton(arg){
	if(arg.data.payType.value=="현금"){
		arg.data.payType.value="카드"
		arg.data.payTypeForEdit.value=0;
	}else if(arg.data.payType.value=="카드"){
		arg.data.payType.value="현금"
		arg.data.payTypeForEdit.value=1;
	}
}

function ClickEditabstractButton(arg){
	if(arg.data.abstract.value=="am"){
		arg.data.abstract.value="pm"
	}else if(arg.data.abstract.value=="pm"){
		arg.data.abstract.value="am"
	}
}

function Delete(){
	TempDB.DeleteDB_byId(editVars[0].id.value);
	Show.data = TempDB.data;
	Show.RenewInputCurrentBalance();
	Show.ReloadHistories();
	Show.CalculateSpcfTotal();
	Show.CalculateIntervalTotal();
	Show.CalculateIntervalItemTotal();
	Show.RenewOutputTable();
}

function EditConfirm(){
 //editVars에 저장된 값으로 after data_time을 만든다.
 	if(editVars[0].year.value*1!=0&&editVars[0].month.value*1!=0&&editVars[0].day.value*1!=0&&editVars[0].hour.value*1!=0&&editVars[0].year!=""&& (editVars[0].year.value > 999) &&editVars[0].month!=""&&editVars[0].day!=""&&editVars[0].hour!=""&&editVars[0].minute!=""&&editVars[0].amount!=""){
 		year=editVars[0].year.value;
		month=editVars[0].month.value;
		day=editVars[0].day.value;
		abstract=editVars[0].abstract.value;
		hour=editVars[0].hour.value;
		minute=editVars[0].minute.value;
		preDataTime=year+" "+month+" "+day+" "+abstract+" "+hour+" "+minute;
		data_time=moment(preDataTime,'YYYY M D a h m',true).format('YYYYMMDDHHmm');
		//
		if(editVars[0].pmType.value=="-"){
			editVars[0].amount.value=editVars[0].amount.value*-1;
		}
		TempDB.EditDB_byId(editVars[0].id.value,editVars[0].account_id.value,editVars[0].amount.value,data_time,editVars[0].usage.value,editVars[0].payTypeForEdit.value,editVars[0].pmType.value,editVars[0].group_id.value);
		Show.RenewInputCurrentBalance();
		Show.ReloadHistories();
		Show.CalculateSpcfTotal();
		Show.CalculateIntervalTotal();
		Show.CalculateIntervalItemTotal();
		Show.RenewOutputTable();
 	}
}

function YearMonthEditConfirm(){
	Show.screenYear.value = moment(Show.screenYear.value,'YYYY',true).format('YYYY');
	Show.screenMonth.value = moment(Show.screenMonth.value,'M',true).format('MM');
	Show.ReloadHistories();
}

function ScreenEditMonthHandler(arg) {
	if(arg.value*1>12){
		Show.screenMonth.value=Show.screenMonth.value/10-(Show.screenMonth.value/10)%1
	}else if(arg.value*1<0){
		Show.screenMonth.value=1
	}
}

function ScreenEditYearHandler(arg) {
	if(arg.value*1<0){
		Show.screenYear.value=1
	}
}

module.exports={
	histories: histories,
	currentBalance: currentBalance,
	ChangeListCashShow: ChangeListCashShow,
	ChangeListCardShow: ChangeListCardShow,
	list_cash_show_color: list_cash_show_color,
	list_card_show_color: list_card_show_color,
	list_cash_show: list_cash_show,
	list_card_show: list_card_show,

	ClickNormal: ClickNormal,
	ClickDay: ClickDay,
	screenMonth: Show.screenMonth,
	screenYear: Show.screenYear,
	Click_lArrow: Click_lArrow,
	Click_rArrow: Click_rArrow,
	
	EditYearHandler,
	EditMonthHandler,
	EditDayHandler,
	EditHourHandler,
	EditMinuteHandler,
	editVars,
	ClickEditpmtypeButton,
	ClickEditpaytypeButton,
	ClickEditabstractButton,
	LongClickNormal,
	Delete,
	EditConfirm,
	YearMonthEditConfirm,
	ScreenEditMonthHandler,
	ScreenEditYearHandler,

	GetInGroupingMode,
	grouping_activation,
	GroupingConfirm
	}