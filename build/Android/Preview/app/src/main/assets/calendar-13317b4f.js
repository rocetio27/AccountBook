var Observable = require("FuseJS/Observable");
var moment = require("Modules/moment");
var Show = require("Modules/Show");
var AccountList =require("Modules/AccountList");
var TempDB = require("Modules/tempDB");

var clicked_identity_of_statistic = Observable();
var screenDateTime = Observable(moment().format('YYYY/MM/DD'));
var calendarMatrix = Observable();
var dayNameMatrix = ["Son","Mon","Tue","Wed","Thr","Fri","Sat"];

var first_day_of_date = moment(screenDateTime.value,'YYYY/MM/DD',true).format('YYYY/MM/01');

var first_day_of_month = 1*moment(first_day_of_date,'YYYY/MM/01',true).format('DD');
var last_day_of_month = 1*moment(first_day_of_date,'YYYY/MM/DD').subtract(1,'day').format('DD');

var first_day_of_month_string = moment(first_day_of_date,'YYYY/MM/01',true).format('dddd');
var startindex = 0; 

var budget_out_left_datetime_option = Observable(false);
var budget_out_right_datetime_option = Observable(false);
RenewCalendar();
function RenewCalendar(){
	startindex = 0;
	calendarMatrix.clear();
	screen_yearmonth_string=1*moment(screenDateTime.value,'YYYY/MM/DD',true).format('YYYYMM')
	today_yearmonthday_num=1*moment().format('YYYYMMDD');
	first_day_of_date = moment(screenDateTime.value,'YYYY/MM/DD',true).format('YYYY/MM/01');
	first_day_of_month_string = moment(first_day_of_date,'YYYY/MM/01',true).format('dddd');
	last_day_of_month = 1*moment(first_day_of_date,'YYYY/MM/DD').add(1,'months').subtract(1,'day').format('DD');
	
	j=1;
	switch(first_day_of_month_string){
		case "Sunday":
		startindex = 0;
		break;
		
		case "Monday":
		startindex = 1;
		break;

		case "Tuesday":
		startindex = 2;
		break;

		case "Wednesday":
		startindex = 3;
		break;

		case "Thursday":
		startindex = 4;
		break;

		case "Friday":
		startindex = 5;
		break;

		case "Saturday":
		startindex = 6;
		break;
	}

	for (var i = 0; i <= 42; i++) {
		if(i<startindex){
			calendarMatrix.add({value: "",visibility: "Hidden" });
		}else if(i>=startindex&&i<=(startindex+last_day_of_month-1)){
			clicked_date_num=(screen_yearmonth_string+moment(''+j,'D',true).format('DD'))*1;
			if(budget_out_right_datetime_option.value==true && today_yearmonthday_num<=clicked_date_num){
				calendarMatrix.add({value: ""+j, visibility: "Visible" });
				j=j+1;
			}else if(budget_out_right_datetime_option.value==true && today_yearmonthday_num>clicked_date_num){
				calendarMatrix.add({value: ""+j, visibility: "Hidden" });
				j=j+1;
			}else if(budget_out_left_datetime_option.value==true && today_yearmonthday_num>=clicked_date_num){
				calendarMatrix.add({value: ""+j, visibility: "Visible" });
				j=j+1;
			}
			if(budget_out_right_datetime_option.value==false && budget_out_left_datetime_option.value==false){
				calendarMatrix.add({value: ""+j, visibility: "Visible" });
				j=j+1;
			}
		}else if(i>(startindex+last_day_of_month-1)&&i<=42){
			// calendarMatrix.add("");
		}
	}
}

function Click_calendar_rArrow(){
	screenDateTime.value=moment(screenDateTime.value,'YYYY/MM/DD',true).add(1,'months').format('YYYY/MM/DD');
	RenewCalendar();
}

function Click_calendar_lArrow(){
	screenDateTime.value=moment(screenDateTime.value,'YYYY/MM/DD',true).subtract(1,'months').format('YYYY/MM/DD');
	RenewCalendar();
}

function Ok_click(){
		switch(clicked_identity_of_statistic.value){

		case "spcf_total" :
		Show.screen_spcf_datetime_string.value=screenDateTime.value;
		Show.screen_spcf_datetime_num.value=1*moment(Show.screen_spcf_datetime_string.value,'YYYY/MM/DD',true).format('YYYYMMDD');
		Show.CalculateSpcfTotal();
		break;

		case "intv_total_left" :
		Show.screen_intv_tot_datetime_left_string.value=screenDateTime.value;
		Show.screen_intv_tot_datetime_left_num.value=1*moment(Show.screen_intv_tot_datetime_left_string.value,'YYYY/MM/DD',true).format('YYYYMMDD');
		Show.CalculateIntervalTotal();
		break;

		case "intv_total_right" :
		Show.screen_intv_tot_datetime_right_string.value=screenDateTime.value;
		Show.screen_intv_tot_datetime_right_num.value=1*moment(Show.screen_intv_tot_datetime_right_string.value,'YYYY/MM/DD',true).format('YYYYMMDD');
		Show.CalculateIntervalTotal();
		break;

		case "item_total_left" :
		Show.screen_item_tot_datetime_left_string.value=screenDateTime.value;
		Show.screen_item_tot_datetime_left_num.value=1*moment(Show.screen_item_tot_datetime_left_string.value,'YYYY/MM/DD',true).format('YYYYMMDD');
		Show.CalculateIntervalItemTotal();
		break;

		case "item_total_right" :
		Show.screen_item_tot_datetime_right_string.value=screenDateTime.value;
		Show.screen_item_tot_datetime_right_num.value=1*moment(Show.screen_item_tot_datetime_right_string.value,'YYYY/MM/DD',true).format('YYYYMMDD');
		Show.CalculateIntervalItemTotal();
		break;

		case "budget_out_left" :
		Show.screen_out_budget_datetime_left_string.value=screenDateTime.value;
		Show.screen_out_budget_datetime_left_num.value=1*moment(Show.screen_out_budget_datetime_left_string.value,'YYYY/MM/DD',true).format('YYYYMMDD');
		budget_out_left_datetime_option.value=false;
		TempDB.EditBudgetOutDB_byID(Show.current_budget_id.value,AccountList.currentAccountId.value,Show.budget_title.value,Show.screen_out_budget_datetime_left_string.value,Show.screen_out_budget_datetime_right_string.value,Show.goal_output.value);
		Show.RenewOutputTable();
		break;
		
		
		case "budget_out_right" :
		Show.screen_out_budget_datetime_right_string.value=screenDateTime.value;
		Show.screen_out_budget_datetime_right_num.value=1*moment(Show.screen_out_budget_datetime_right_string.value,'YYYY/MM/DD',true).format('YYYYMMDD');
		budget_out_right_datetime_option.value=false;
		TempDB.EditBudgetOutDB_byID(Show.current_budget_id.value,AccountList.currentAccountId.value,Show.budget_title.value,Show.screen_out_budget_datetime_left_string.value,Show.screen_out_budget_datetime_right_string.value,Show.goal_output.value);
		Show.RenewOutputTable();
		break;
			
	}
}

function Click_calendar_number(arg){
	clicked_day_string=arg.data.value
	if (clicked_day_string*1<10){
		clicked_day_string="0"+clicked_day_string;
	}
	screenDateTime.value = moment(screenDateTime.value,'YYYY/MM/DD',true).format('YYYY/MM/')+clicked_day_string;
}

module.exports={
	RenewCalendar,
	calendarMatrix: calendarMatrix,
	dayNameMatrix: dayNameMatrix,
	screenDateTime: screenDateTime,

	budget_out_left_datetime_option,
	budget_out_right_datetime_option,
	Click_calendar_lArrow: Click_calendar_lArrow,
	Click_calendar_rArrow: Click_calendar_rArrow,
	Click_calendar_number: Click_calendar_number,
	clicked_identity_of_statistic: clicked_identity_of_statistic,
	Ok_click: Ok_click,
}
