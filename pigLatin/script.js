//translate a phrase of pig latin into english
//"hetay uickqay rownbay oxfay" -> "the quick brown fox"
let phrase = "hetay uickqay rownbay oxfay";
let words = phrase.split(" ")

for(let i=0;i<words.length;i++)
	words[i] = words[i].charAt(words[i].length-3) + words[i].substring(0,words[i].length-3);

console.log(words);

wordsInString = words.join(" ");

document.getElementById("pigLatin").innerHTML = wordsInString;