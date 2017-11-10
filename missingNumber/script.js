//find the missing number in an integer array of 1 to 100

//first we need to create the array with a missing number
let numbers = new Array(100);
for(let i=1;i<101;i++)
	numbers[i] = i; 

//create a missing number
numbers[Math.floor(Math.random() * 100)] = 0;

let total = 0;
let actual = 0;

//add the numbers in the array, and subtract to find the missing number
for(let i=1;i<101;i++){
	total += i;
	actual += numbers[i];
}

let missingNumber = total-actual;

document.getElementById("missing").innerHTML = "The Missing Number is: " + missingNumber;