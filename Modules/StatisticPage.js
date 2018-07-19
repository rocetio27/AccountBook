var Observable = require("FuseJS/Observable");
var Show = require("Modules/Show");
var Calendar = require("Modules/Calendar");
var UsagePopup = require("Modules/UsagePopup");
var TempDB = require("Modules/tempDB");
var calendarDateTime = Calendar.screenDateTime;

if(Show.statistic_once.value==false){
	Show.CalculateSpcfTotal();
	Show.CalculateIntervalTotal();
	Show.CalculateIntervalItemTotal();
	Show.statistic_once.value=true;
}

function Click_spcf_total_date(arg){
	Calendar.clicked_identity_of_statistic.value="spcf_total"
	calendarDateTime.value = arg.data.screen_spcf_datetime_string.value;
	Calendar.RenewCalendar();
}
function Click_intv_tot_date_left(arg){
	Calendar.clicked_identity_of_statistic.value="intv_total_left"
	calendarDateTime.value = arg.data.screen_intv_tot_datetime_left_string.value;
	Calendar.RenewCalendar();
}
function Click_intv_tot_date_right(arg){
	Calendar.clicked_identity_of_statistic.value="intv_total_right"
	calendarDateTime.value = arg.data.screen_intv_tot_datetime_right_string.value;
	Calendar.RenewCalendar();
}

function Click_item_tot_date_left(arg){
	Calendar.clicked_identity_of_statistic.value="item_total_left"
	calendarDateTime.value = arg.data.screen_item_tot_datetime_left_string.value;
	Calendar.RenewCalendar();
}
function Click_item_tot_date_right(arg){
	Calendar.clicked_identity_of_statistic.value="item_total_right"
	calendarDateTime.value = arg.data.screen_item_tot_datetime_right_string.value;
	Calendar.RenewCalendar();
}


function SelectUsage(arg){
	Show.selected_item.value=arg.data.name
}

module.exports={
	Click_spcf_total_date, Click_spcf_total_date,
	Click_intv_tot_date_right: Click_intv_tot_date_right,
	Click_intv_tot_date_left: Click_intv_tot_date_left,
	Click_item_tot_date_right: Click_item_tot_date_right,
	Click_item_tot_date_left: Click_item_tot_date_left,

	spcf_output_total: Show.spcf_output_total,
 	spcf_input_total: Show.spcf_input_total,
 	statistic_once: Show.statistic_once,
	screen_spcf_datetime_string: Show.screen_spcf_datetime_string,

 	calendarMatrix: Calendar.calendarMatrix,
 	dayNameMatrix: Calendar.dayNameMatrix,
 	calendarDateTime: calendarDateTime,
 	Click_calendar_lArrow: Calendar.Click_calendar_lArrow,
 	Click_calendar_rArrow: Calendar.Click_calendar_rArrow,
 	Click_calendar_number: Calendar.Click_calendar_number,
 	Ok_click: Calendar.Ok_click,

 	screen_intv_tot_datetime_right_num: Show.screen_intv_tot_datetime_right_num,
 	screen_intv_tot_datetime_left_num: Show.screen_intv_tot_datetime_left_num,
 	screen_intv_tot_datetime_right_string: Show.screen_intv_tot_datetime_right_string,
 	screen_intv_tot_datetime_left_string: Show.screen_intv_tot_datetime_left_string,
 	intv_tot_input_total: Show.intv_tot_input_total,
 	intv_tot_output_total: Show.intv_tot_output_total,
 	CalculateIntervalTotal: Show.CalculateIntervalTotal,

 	screen_item_tot_datetime_right_num: Show.screen_item_tot_datetime_right_num,
 	screen_item_tot_datetime_left_num: Show.screen_item_tot_datetime_left_num,
 	screen_item_tot_datetime_right_string: Show.screen_item_tot_datetime_right_string,
 	screen_item_tot_datetime_left_string: Show.screen_item_tot_datetime_left_string,
 	item_tot_input_total: Show.item_tot_input_total,
 	item_tot_output_total: Show.item_tot_output_total,
 	CalculateIntervalItemTotal: Show.CalculateIntervalItemTotal,
 	selected_item: Show.selected_item,
 	tempUsageList: TempDB.tempUsageList,
 	SelectUsage: SelectUsage
 }