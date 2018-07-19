var Observable = require("FuseJS/Observable");
var moment = require("Modules/moment");
var Calendar = require("Modules/Calendar");
var Show = require("Modules/Show");
var TempDB = require("Modules/tempDB");
var AccountList =require("Modules/AccountList");
var goal_output_entrymode=Observable(false);
var title_entrymode=Observable(false);

function ChangeGoalOutputEntryMode(){
	if(goal_output_entrymode.value==false){
		goal_output_entrymode.value=true;
	}else if(goal_output_entrymode.value==true){
		goal_output_entrymode.value=false;
	}
}
function ChangeTitleEntryMode(){
	if(title_entrymode.value==false){
		title_entrymode.value=true;
	}else if(title_entrymode.value==true){
		title_entrymode.value=false;
	}
}

function GoalOutputEntryOk(){
	ChangeGoalOutputEntryMode();
	TempDB.EditBudgetOutDB_byID(Show.current_budget_id.value,AccountList.currentAccountId.value,Show.budget_title.value,Show.screen_out_budget_datetime_left_string.value,Show.screen_out_budget_datetime_right_string.value,Show.goal_output.value);
	Show.RenewOutputTable();

}
function TitleEntryOk(){
	TempDB.EditBudgetOutDB_byID(Show.current_budget_id.value,AccountList.currentAccountId.value,Show.budget_title.value,Show.screen_out_budget_datetime_left_string.value,Show.screen_out_budget_datetime_right_string.value,Show.goal_output.value);
	ChangeTitleEntryMode();

}

function Click_budget_out_datetime_left(arg){
	Calendar.clicked_identity_of_statistic.value="budget_out_left"
	Calendar.screenDateTime.value = arg.data.screen_out_budget_datetime_left_string.value;
	Calendar.budget_out_left_datetime_option.value=true;
	Calendar.RenewCalendar();
}
function Click_budget_out_datetime_right(arg){
	Calendar.clicked_identity_of_statistic.value="budget_out_right"
	Calendar.screenDateTime.value = arg.data.screen_out_budget_datetime_right_string.value;
	Calendar.budget_out_right_datetime_option.value=true;
	Calendar.RenewCalendar();
}


module.exports={
	goal_output_entrymode,
	title_entrymode,
	GoalOutputEntryOk,
	TitleEntryOk,
	ChangeGoalOutputEntryMode,
	ChangeTitleEntryMode,

	screen_out_budget_datetime_left_num: Show.screen_out_budget_datetime_left_num,
	screen_out_budget_datetime_right_num: Show.screen_out_budget_datetime_right_num,
	screen_out_budget_datetime_left_string: Show.screen_out_budget_datetime_left_string,
	screen_out_budget_datetime_right_string: Show.screen_out_budget_datetime_right_string,
	budget_today_datetime_num: Show.budget_today_datetime_num,
	budget_today_datetime_string: Show.budget_today_datetime_string,

	Click_budget_out_datetime_left,
	Click_budget_out_datetime_right,
	calendarMatrix: Calendar.calendarMatrix,
 	dayNameMatrix: Calendar.dayNameMatrix,
 	calendarDateTime: Calendar.screenDateTime,
 	Click_calendar_lArrow: Calendar.Click_calendar_lArrow,
 	Click_calendar_rArrow: Calendar.Click_calendar_rArrow,
 	Click_calendar_number: Calendar.Click_calendar_number,
 	Ok_click: Calendar.Ok_click,

 	left_to_right: Show.left_to_right,
 	now_to_right: Show.now_to_right,
 	left_to_now: Show.left_to_now,
 	day_left: Show.day_left,
 	week_left: Show.week_left,
	month_left: Show.month_left,
	year_left: Show.year_left,
	goal_output: Show.goal_output,
	day_out_limit: Show.day_out_limit,
	month_out_limit: Show.month_out_limit,
	week_out_limit: Show.week_out_limit,
	year_out_limit: Show.year_out_limit,
	title: Show.budget_title,
	output_so_far: Show.output_so_far,
}