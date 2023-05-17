
//parentElement:-
//get parent elements name by using it
var a= document.getElementById("INNER").parentElement;
console.log(a);

//parentNode:-
//get parent elements name by using it
var a= document.getElementById("OUTER").parentNode;
console.log(a);

//Different between parentElement and ParentNode:-
//parentElement returns only parent element name, while ParentNode return anything if parent div is main.

//----------------------------------------


//children
//it will return children element...
var b= document.getElementById("child").children[2];
console.log(b);

var b= document.getElementById("INNER").childNodes[2];
console.log(b);

//========================================
var c=document.getElementById("INEER").firstElementChild;