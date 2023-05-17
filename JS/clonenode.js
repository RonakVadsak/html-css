var target = document.getElementById("list-1").children[2];

var CopyElement = target.cloneNode(true);
//if you write true you can get value in consloe while in false you can get only tag and attributes 


console.log(CopyElement);


//append 
document.getElementById("list-2").appendChild("CopyElement");
