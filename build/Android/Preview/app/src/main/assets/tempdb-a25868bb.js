var Observable=require("FuseJS/Observable");
var data = Observable();
var tempAccountList = Observable();
var tempUsageList = Observable();
var tempGroupIdList = Observable();
var tempBudgetOut = Observable();
var moment = require("Modules/moment");
var sqlite = require('SQLite');
var db = sqlite.open("file.sqlite");

//db.execute("drop table INITIAL_VALUE;")
//MainView initial_value 구현
	//app 실행시 db가 없으면 최초로 생성함
	db.execute("create table if not exists INITIAL_VALUE (id integer primary key autoincrement, account_id integer, amount integer,dateTime string,usage string,payType integer,pmType string)");
	var tvi = db.query("select * from INITIAL_VALUE")[0];
    //table이 비어있으면, default value 입력
    console.log("?????");
    console.log("table이 비어있나요? : "+(!tvi));
    //console.log("그렇다면 뭐가 들었죠?"+tvi.payType);
    if ( !tvi ){
    	db.execute("insert into INITIAL_VALUE (account_id,amount,dateTime,usage,payType,pmType) values (1,0,'17:12','DEFAULT',1,'+');");
		
    	console.log("테이블 디폴트가 생성되었습니다. ")
    	var temp_initial_value = Observable({
			account_id: 1,
			amount: 0,
			dateTime: "17:12",
			usage: "DEFAULT",
			payType: 1,
			pmType: "+"
		});
    }else if(tvi != null){
    	var temp_initial_value = Observable({
			account_id: tvi.account_id*1,
			amount: tvi.amount*1,
			dateTime: tvi.dateTime,
			usage: tvi.usage,
			payType: tvi.payType*1,
			pmType: tvi.pmType
		});
		console.log("너는 혹시 0을 넣고있니 :"+temp_initial_value.value.payType);
    }
    //INITIAL_VALUE table로부터 초기값을 긁어옴
	
	
    function InitialValueSave(account_id, amount, dateTime, usage, payType, pmType){
    	console.log("query:"+"update INITIAL_VALUE set account_id = "+account_id+", amount = "+amount+", dateTime = "+dateTime+", usage = '"+usage+"', payType = "+payType+", pmType = '"+pmType+"' where id = 1 ;")
    	db.execute("update INITIAL_VALUE set account_id = "+account_id+", amount = "+amount+", dateTime = "+dateTime+", usage = '"+usage+"', payType = "+payType+", pmType = '"+pmType+"' where id = 1 ;");
    	var test_array_1 = db.query("select * from INITIAL_VALUE");
    	console.log("잘 추가 됐나요?"+test_array_1[0].payType);
    }

    function RenewInitialValue(){
    	var temp = db.query("select * from INITIAL_VALUE")[0];
    	temp_initial_value.value = {
			account_id: temp.account_id*1,
			amount: temp.amount*1,
			dateTime: temp.dateTime,
			usage: temp.usage,
			payType: temp.payType*1,
			pmType: temp.pmType
    	}
    }

//
// db.execute("drop table DATA;");
// db.execute("drop table USAGELIST;");
// db.execute("drop table ACCOUNTLIST;");
// db.execute("drop table GROUPID;");
// db.execute("drop table BUDGET_OUT;");

db.execute("create table if not exists DATA (id integer primary key autoincrement, account_id integer,amount integer,data_time integer,usage text,payType integer,pmType text,group_id integer)");
db.execute("create table if not exists USAGELIST(id integer primary key autoincrement, name text)");
db.execute("create table if not exists ACCOUNTLIST(id integer primary key autoincrement, title text)");
db.execute("create table if not exists GROUPID(id integer primary key autoincrement, name text)");
db.execute("create table if not exists BUDGET_OUT(id integer primary key autoincrement, account_id integer, title text, left_date text, right_date text, goal integer)");
var groupSize = Observable(0);
var temp = db.query("select * from ACCOUNTLIST");
if(temp.length==0){
	db.execute("insert into ACCOUNTLIST (title) values('MyBook')");
}
var temp_budget_out = db.query("select * from BUDGET_OUT");
if(temp_budget_out.length==0){
	db.execute("insert into BUDGET_OUT (account_id,title, left_date, right_date, goal) values(1,'MyOutputBudget','"+moment().format('YYYY/MM/DD')+"','"+moment().format('YYYY/MM/DD')+"',0)");
}

getDB();
getAccountListDB();
getUsageListDB();
getGroupIdListDB();
getBudgetOutDB();
function getDB(){
	data.clear();
	var r = db.query("select * from DATA order by data_time asc");

	for (var i = 0; i <= r.length-1; i++) {
		data.add({
			id: r[i].id*1,
			account_id: r[i].account_id*1,
			amount: r[i].amount*1, 
			data_time: r[i].data_time*1,
			usage: r[i].usage,
			payType: r[i].payType*1,
			pmType: r[i].pmType,
			group_id: r[i].group_id*1 
		});
	}
}

function DeleteDB_byId(id){
	db.execute("delete from DATA where id = "+id);
	getDB();
}

function EditDB_byId(id,account_id,amount,data_time,usage,payType,pmType,group_id){
	db.execute("update DATA set account_id="+account_id+", amount="+amount+", data_time="+data_time*1+", usage='"+usage+"',payType="+payType+",pmType='"+pmType+"', group_id="+group_id+" where id = "+id)
	getDB();
}

function getAccountListDB(){
	tempAccountList.clear();
	var s = db.query("select * from ACCOUNTLIST");
	for (var i = 0; i <= s.length - 1; i++) {
		tempAccountList.add({
			id: Observable(s[i].id*1),
			title: Observable(s[i].title)
		})
	}
}

function DeleteAccountListDB_byID(id){
	db.execute("delete from ACCOUNTLIST where id ="+id);
	db.execute("delete from DATA where account_id ="+id);
	db.execute("delete from BUDGET_OUT where account_id ="+id);
	getAccountListDB();
}

function EditAccountListDB_byID(id,title){
	db.execute("update ACCOUNTLIST set title = '"+title+"' where id = "+id);
	getAccountListDB();
}

function getUsageListDB(){
	tempUsageList.clear();
	var t = db.query("select * from USAGELIST");
	for (var i = 0; i <= t.length - 1; i++) {
		tempUsageList.add({
			id: t[i].id*1,
			name: t[i].name
		})
	}
}

function DeleteUsageListDB_byID(id){
	db.execute("delete from USAGELIST where id ="+id);
	getUsageListDB();
}

function EditUsageListDB_byID(id,name){
	db.execute("update USAGELIST set name = '"+name+"' where id = "+id);
	getUsageListDB();
}

function AddUsageListDB(name){
	db.execute("insert into USAGELIST (name) values('"+name+"')");
	getUsageListDB();
}

function getGroupIdListDB(){
	tempGroupIdList.clear();
	var u = db.query("select * from GROUPID");
	for (var i = 0; i <= u.length - 1; i++) {
		tempGroupIdList.add({
			id: u[i].id*1,
			name: u[i].name,
		})
	}
}

function AddGroupIdListDB(){
	db.execute("insert into GROUPID (name) values('"+"default"+"')");
	groupSize.value=groupSize.value+1;
}

function getBudgetOutDB(){
	tempBudgetOut.clear();
	var q = db.query("select * from BUDGET_OUT");
	for (var i = 0; i <= q.length - 1; i++) {
		tempBudgetOut.add({
			id: q[i].id*1,
			account_id: q[i].account_id*1,
			title: q[i].title,
			left_date: q[i].left_date,
			right_date: q[i].right_date,
			goal: q[i].goal*1
		})
	}
}
function EditBudgetOutDB_byID(id,account_id,title,left_date,right_date,goal){
	db.execute("update BUDGET_OUT set account_id = "+account_id+", title = '"+title+"', left_date = '"+left_date+"', right_date = '"+right_date+"',goal="+goal+" where id = "+id);
	getBudgetOutDB();
}

module.exports={
	data,
	tempUsageList,
	tempAccountList,
	tempGroupIdList,
	tempBudgetOut,

	getDB,
	getAccountListDB,
	getUsageListDB,
	getGroupIdListDB,
	getBudgetOutDB,
	
	DeleteDB_byId,
	DeleteAccountListDB_byID,
	DeleteUsageListDB_byID,
	
	EditDB_byId,
	EditAccountListDB_byID,
	EditUsageListDB_byID,
	EditBudgetOutDB_byID,
	
	AddUsageListDB,
	AddGroupIdListDB,

	groupSize,

	temp_initial_value,
	InitialValueSave,
	RenewInitialValue
}