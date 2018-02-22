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
	var inputText = document.getElementById("input").value;

    var outputText = q0(inputText, "", map);
	document.getElementById("result").innerHTML = outputText;
}

/* Devanagari to Latin */
function revTransliterate(map, revmap) {

	var inputText = document.getElementById("input").value;
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


function controller() {
     if(document.getElementById("devanagariText").checked) {
        loadDoc(revTransliterate);
     }
     else if(document.getElementById("latinText").checked) {
        loadDoc(transliterate);
     }
     else
         alert("Choose input language");
}

     document.onkeydown = function(event) {
	 if(event.keyCode == 112) { //F1
	    if(document.getElementById("devanagariText").checked == false)
            document.getElementById("input").value = document.getElementById("result").value;
        document.getElementById("devanagariText").checked=true;
		loadDoc(revTransliterate);
	 }

	 else if(event.keyCode == 113) { //F2
	    if(document.getElementById("latinText").checked == false)
		    document.getElementById("input").value = document.getElementById("result").value;
        document.getElementById("latinText").checked=true;
		loadDoc(transliterate);
     }

     //For Copying INPUT box
	 else if(event.keyCode == 120) { //F9
        var input=document.getElementById("input");
        input.select();
        document.execCommand("copy");
     }

   	 //For Copying RESULT box
     else if(event.keyCode == 121) { //F10
       	var result=document.getElementById("result");
        result.select();
        document.execCommand("copy");
     }
}

function onOverHelpButton() {
    document.getElementById("helpclick").style.display="block";
    document.getElementById("inputhelp").style.display="block";
}

function onOutHelpButton() {
    document.getElementById("helpclick").style.display="none";
    document.getElementById("inputhelp").style.display="none";
}

function onSelectResultText() {
    var startPos = textComponent.selectionStart;
    var endPos = textComponent.selectionEnd;
    selectedText = textComponent.value.substring(startPos, endPos)
}
