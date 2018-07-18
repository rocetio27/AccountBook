var Observable = require("FuseJS/Observable");
var Show = require("Modules/Show");
var TempDB = require("Modules/tempDB");
var AccountList = require("Modules/AccountList");
var moment=require("Modules/moment");
var temp_initial_value = TempDB.temp_initial_value
var data=TempDB.data;
var sqlite = require('SQLite');
var db = sqlite.open("file.sqlite");

// popup javascript start 
var UsagePopup = require("Modules/UsagePopup");
var tempUsageList = TempDB.tempUsageList;
var usageListAddInput = Observable("");
	
	function AddToTempUsageList() {
		TempDB.AddUsageListDB(usageListAddInput.value);
		UsagePopup.selected.value=usageListAddInput.value;
		inputVars.usage.value=UsagePopup.selected.value;
		usageListAddInput.value="";
	}
	function removeItem(arg) {
	    TempDB.DeleteUsageListDB_byID(arg.data.id);
	}

	function SelectUsage(v) {
	 	UsagePopup.selected.value = v.data.name;
	 	inputVars.usage.value=UsagePopup.selected.value;
	}

	function SelectDefault(v) {
	 	UsagePopup.selected.value = "Default";
	}
	function PM_TypeChange(){
		if (inputVars.pmType.value=="+"){

			addingValueColor.value="#EE0000";
			pmTypeText.value = "OUTPUT";
			inputVars.pmType.value="-";

		} else if ( inputVars.pmType.value=="-"){

			addingValueColor.value="#006600";
			pmTypeText.value = "INPUT";
			inputVars.pmType.value="+";
		}
	}

	function PayTypeChange(){
		if (inputVars.payType.value==1){
			payTypeText.value = "CARD";
			cashOrCardText.value = "CARD";
			inputVars.payType.value=0;
			Show.input_payType.value=0;
			Show.RenewInputCurrentBalance();

		} else if ( inputVars.payType.value==0){
			payTypeText.value = "CASH";
			cashOrCardText.value = "CASH";
			inputVars.payType.value=1;
			Show.input_payType.value=1;
			Show.RenewInputCurrentBalance();
		}
	}

	function SetPM_Type(){
		if (inputVars.pmType.value=="+"){

			addingValueColor.value="#006600";
			pmTypeText.value = "INPUT";
			inputVars.pmType.value="+";

		} else if ( inputVars.pmType.value=="-"){

			addingValueColor.value="#EE0000";
			pmTypeText.value = "OUTPUT";
			inputVars.pmType.value="-";
		}
	}

	function SetPayType(){
		if (inputVars.payType.value==1){
			payTypeText.value = "CASH";
			cashOrCardText.value = "CASH";
			inputVars.payType.value=1;
			Show.input_payType.value=1;
			Show.RenewInputCurrentBalance();

		} else if ( inputVars.payType.value==0){
			
			payTypeText.value = "CARD";
			cashOrCardText.value = "CARD";
			inputVars.payType.value=0;
			Show.input_payType.value=0;
			Show.RenewInputCurrentBalance();
		}
	}	
//popup javascript end
UsagePopup.selected.value = temp_initial_value.value.usage
console.log("temp_initial_value 의 값은? : "+temp_initial_value.value.payType)
var inputVars = {
	account_id: Observable(temp_initial_value.value.account_id),
	amount: Observable(temp_initial_value.value.amount),
	dateTime: Observable(temp_initial_value.value.dateTime),
	usage: Observable(UsagePopup.selected.value),
	payType: Observable(temp_initial_value.value.payType),
	pmType: Observable(temp_initial_value.value.pmType) // 음수 : "" 양수 : "+"
};
console.log("inputVars 에 뭐가 들었는지 볼까요? : "+inputVars.payType.value)
Show.input_payType.value=inputVars.payType.value;

var addingValueColor = Observable("#006600");
var addingValue = Observable(0);
var pmTypeText = Observable("INPUT");
var payTypeText = Observable("CASH");
Show.RenewInputCurrentBalance();
var currentBalance = Show.i_cB;
var cashOrCardText = Observable("CASH");
console.log("돌아 왔나요?")
SetPayType();
SetPM_Type();
console.log("바꿨 어요 ?")



var numSet=[1,2,3,4,5,6,7,8,9,0];


function BalanceAdd(v){
	if(addingValue.value ==0){
		addingValue.value = v.data;
	}else{
		addingValue.value = ""+addingValue.value+v.data;
	}
}

function Submit() {
	if(inputVars.pmType.value=="+"){
		inputVars.amount.value=1*addingValue.value;
		inputVars.account_id.value=AccountList.currentAccountId.value;
		inputVars.dateTime.value=moment().format('YYYYMMDDHHmm');
		db.execute("insert into DATA (account_id,amount,data_time,usage,payType,pmType,group_id) values ("+inputVars.account_id.value+", "+inputVars.amount.value+", "+inputVars.dateTime.value+",'"+inputVars.usage.value+"',"+inputVars.payType.value+",'"+inputVars.pmType.value+"',0);");
		TempDB.InitialValueSave(inputVars.account_id.value, inputVars.amount.value, inputVars.dateTime.value, inputVars.usage.value, inputVars.payType.value, inputVars.pmType.value);
		TempDB.RenewInitialValue();
		TempDB.getDB();
		
		addingValue.value=0;
		Show.RenewInputCurrentBalance();
		Show.ReloadHistories();
		Show.CalculateSpcfTotal();
		Show.CalculateIntervalTotal();
		Show.CalculateIntervalItemTotal();
		Show.RenewOutputTable();
	}else if (inputVars.pmType.value=="-"){
		inputVars.amount.value=-1*addingValue.value;
		inputVars.account_id.value=AccountList.currentAccountId.value;
		inputVars.dateTime.value=moment().format('YYYYMMDDHHmm');
		db.execute("insert into DATA (account_id,amount,data_time,usage,payType,pmType,group_id) values ("+inputVars.account_id.value+", "+inputVars.amount.value+", "+inputVars.dateTime.value+",'"+inputVars.usage.value+"',"+inputVars.payType.value+",'"+inputVars.pmType.value+"',0);");
		TempDB.InitialValueSave(inputVars.account_id.value, inputVars.amount.value, inputVars.dateTime.value, inputVars.usage.value, inputVars.payType.value, inputVars.pmType.value);
		TempDB.RenewInitialValue();
		TempDB.getDB();
		
		addingValue.value=0;
		Show.RenewInputCurrentBalance();
		Show.ReloadHistories();
		Show.CalculateSpcfTotal();
		Show.CalculateIntervalTotal();
		Show.CalculateIntervalItemTotal();
		Show.RenewOutputTable();
	}
}

function Backspace(v){
	addingValue.value = (addingValue.value/10-(addingValue.value/10)%1);
}
module.exports ={
	inputVars,
	addingValue,
	BalanceAdd,
	numSet,
	Backspace,
	Submit,
	addingValueColor,
	pmTypeText,
	payTypeText,
	PM_TypeChange,
	PayTypeChange,
	currentBalance,
	cashOrCardText,

	// for popup
	selected: UsagePopup.selected,
	tempUsageList,
	usageListAddInput,
	AddToTempUsageList,
	removeItem,
	SelectUsage,
	SelectDefault
	// for popup

};