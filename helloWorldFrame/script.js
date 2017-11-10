//print a given phrase in a frame of stars
let phrase = "Hello World";
let max = 0;
let words = phrase.split(" ")

for(let i =0;i<words.length;i++)
	if(phrase[i].length > max)
		max = phrase[i].length;

let wordsInString = "";
for(let i = 0;i<words.length;i++)
	wordsInString += "* " + words[i] + " *<br>";

let stars = "";
max += 8;
for(let i = 0;i<max;i++)
	stars += "*";

let output = stars + "<br>" + wordsInString + stars;

document.getElementById("frame").innerHTML = output;

//*********
//* Hello *
//* World *
//*********