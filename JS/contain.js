var parentElement = document.getElementById("test");
var child = document.getElementById("abc");
var find =parentElement.contains(child);
console.log(find);

var parentElement = document.getElementById("test=1");
var child = document.getElementById("AbC");
var find =parentElement.contains(child);
console.log(find);