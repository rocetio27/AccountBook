var Observable = require("FuseJS/Observable");
var TempDB = require("Modules/tempDB");
var selected=Observable("DEFAULT");
var tempUsageList = Observable();
module.exports = { selected: selected, tempUsageList: tempUsageList};