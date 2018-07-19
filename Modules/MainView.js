	var moment=require("Modules/moment");
	var Observable=require("FuseJS/Observable");
	var Show=require("Modules/Show");
	var TempDB=require("Modules/tempDB");
	var sqlite = require('SQLite');
	var db = sqlite.open("file.sqlite");

	//각 페이지별 변수 참조를 위한 것입니다.
	var input_page = require("Modules/InputPage");
	var list_page = require("Modules/ListPage");
	var statistic_page = require("Modules/StatisticPage");
	var budget_page = require("Modules/BudgetPage");

	//get currentDateTime

	// for swipe navigation Start;
	router.bookmark({
		name: "input",
		path: ["inputPanel",{}]
	})
	router.bookmark({
		name: "list",
		path: ["listPanel",{}]
	})
	router.bookmark({
		name: "statistic",
		path: ["statisticPanel",{}]
	})
	router.bookmark({
		name: "budget",
		path: ["budgetPanel",{}]
	})


	//for swipe navigation End 

	//for AccountList Start 
	var AccountList=require("Modules/AccountList");
	var tempList=AccountList.tempAccountList;

	var clicked_Account = Observable();
	var clicked_Account_id=clicked_Account.map(function(x){return x.id.value;});
	var clicked_Account_title=clicked_Account.map(function(x){return x.title.value;}); // list click시여기에 id를 담음
	var index = clicked_Account.map(function(x){return tempList.indexOf(x)});
	var tempListLastIndex=AccountList.idCount;
	
	var currentTitle=Observable(tempList.getAt(0).title.value);
	 
	// currentTitleId는 AccountList.js에 저장되어있음 Edge에서 list 선택시 current title과 current id 둘 다 수정해주어야함.
	function editTitle(arg){
		console.log("arg.data.title.value:"+arg.data.title.value);
		TempDB.EditAccountListDB_byID(arg.data.id.value,arg.data.title.value);
	}

	function goToInput(){
		router.goto("inputPanel");
	}
 
	function goToList(){
		router.goto("listPanel");
	}

	function goToStatistic(){ 
		router.goto("statisticPanel");
	}
	function goToBudget(){ 
		router.goto("budgetPanel");
	}
	function tempListAdd(){
		db.execute("insert into ACCOUNTLIST (title) values('"+"default"+"')");
		TempDB.getAccountListDB();
	}

	function DeleteAccount(arg){
		TempDB.DeleteAccountListDB_byID(arg.data.id.value);
		AccountList.currentAccountId.value=1;
		currentTitle.value=TempDB.tempAccountList.getAt(0).title.value;
		Show.RenewInputCurrentBalance();
		Show.ReloadHistories();
		Show.CalculateSpcfTotal();
		Show.CalculateIntervalTotal();
		Show.CalculateIntervalItemTotal();
		Show.RenewOutputTable();
	}

	function SelectAccount(arg){
		AccountList.currentAccountId.value=arg.data.id.value;
		currentTitle.value=arg.data.title.value;
		Show.RenewInputCurrentBalance();
		Show.ReloadHistories();
		Show.CalculateSpcfTotal();
		Show.CalculateIntervalTotal();
		Show.CalculateIntervalItemTotal();
		Show.RenewOutputTable();
	}
	//for AccountList End
	module.exports={  
		goToInput: goToInput,
		goToList: goToList,
		goToStatistic: goToStatistic,
		goToBudget,

		tempListAdd: tempListAdd,
		tempList: tempList,
		tempListLastIndex: tempListLastIndex,

		currentTitle: currentTitle,
		DeleteAccount: DeleteAccount,

		clicked_Account_id: clicked_Account_id,
		clicked_Account_title: clicked_Account_title,
		index: index,
		SelectAccount: SelectAccount,
		editTitle
	}