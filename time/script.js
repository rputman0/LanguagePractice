let today = new Date();
let dayOfWeek = ["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"];
let hours = today.getHours();
currentTime = ("Today is "+ dayOfWeek[today.getDay()] + ". The current time is: " + 
              (hours > 12 ? hours -= 12: hours )  + ":" + today.getMinutes() + " pm."); 

document.getElementById("time").innerHTML = currentTime;

date = today.getMonth()+1 + "/" + today.getDate() + "/" + today.getFullYear();
document.getElementById("fulltime").innerHTML = date;

function printCurrentPage(){
	window.print();
}