/* the main ajax method */
function loadDoc(func) {
	var xhttp = new XMLHttpRequest();
	var files = ["consonants.csv", "digits.csv", "matra.csv", "vowels.csv", "basic_info.csv"];
	var entry = [];
	var map = [];
	var revmap = [];

	for (var i = 0; i < 4; i++) {
		xhttp.onreadystatechange = function() {
    			if (xhttp.readyState == 4 && xhttp.status == 200) {
				entry = parseCSV(xhttp.responseText);
				map[i] = entry[0];
				revmap[i] = entry[1];
			}
		};	
	
		xhttp.open("GET", files[i], false);
		xhttp.send();
	}

	xhttp.onreadystatechange = function() {
    		if (xhttp.readyState == 4 && xhttp.status == 200) {
			entry = xhttp.responseText.split("\n");
			map[4] = revmap[4] = entry;
		}
	};	
	
	xhttp.open("GET", files[4], false);
	xhttp.send();
	func(map, revmap);
}

/* Latin to Devanagari */

function transliterate(map, revmap) {
	var inputText = document.getElementById("latinText").value;
	
	var outputText = q0(inputText, "", map);
	document.getElementById("result").innerHTML = outputText;
}

/* Devanagari to Latin */
function revTransliterate(map, revmap) {

	var inputText = document.getElementById("devanagariText").value;
	var outputText = revParseText(inputText, revmap);
	document.getElementById("result").innerHTML = outputText;
}

/* The function to parse Devanagari input and to obtain the corresponding characters */
function revParseText(inputText, revmap) {
	var cursor = 0;
	var outputText = "";

	inputText = removeExtraWhitespace(inputText);

	
	while (cursor < inputText.length) {
		for (var i = 0; i < 4; i++) {
			if (revmap[i][inputText[cursor]] !== undefined) {

				if (isHalant(inputText[cursor])) {
					outputText = outputText.slice(0, -1);
				}

				else if (i == 2 && !isAnuswar(inputText[cursor])) {
					outputText = outputText.slice(0, -1);
				}
				
				outputText += revmap[i][inputText[cursor]];
				
				if (i == 0) {
					outputText += "a";
				}
				
			}
		}

		if (inputText[cursor] == " " || inputText[cursor] == "." || isPunctuation(inputText[cursor], revmap[4][1]))
			outputText += inputText[cursor];

		else
			outputText += "";
		cursor ++;
		
	}
	
	return removeExtraWhitespace(outputText);
}
