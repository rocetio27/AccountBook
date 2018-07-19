var Observable=require("FuseJS/Observable");
var TempDB=require("Modules/tempDB");
var tempAccountList=TempDB.tempAccountList;
var currentAccountId = Observable(1);
var idCount = Observable(1);
console.log("Account List . js 가 실행되었습니다.");
  
  
module.exports={
	tempAccountList: tempAccountList,
	currentAccountId: currentAccountId,
	idCount: idCount
};