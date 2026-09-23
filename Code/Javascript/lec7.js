
//<------------- this is to get and set the attribute ------------->

let p = document.querySelector("div");
console.log("This is div :- ");
console.log(p);

let p2 = p.getAttribute("id");
console.log("This is a p tag id :- ")
console.log(p2);
// we can also print name as same as class 
let p3 = document.querySelector("p").getAttribute("class");
console.log("This is a p tag class :- ")
console.log(p3);

let p4 = document.querySelector("p").setAttribute("class","new class");

//<------------- we can also change the style in JS ------------->

let div = document.querySelector("div");
div.style.backgroundColor = "yellow";
div.style.color = "red";
div.style.fontSize = "20px";

document.getElementById("box").innerText = "!! Hello !!";

//<-------------- insert & delet the element on HTML code ---------------->

let newButton = document.createElement("button");
newButton.innerText = "Click Me!";
document.getElementById("listofitem").append(newButton);
// document.getElementById("listofitem").append(newButton);     add at the end of node(inside)
// document.getElementById("listofitem").prepend(newButton);    add at the start of node(inside)
// document.getElementById("listofitem").before(newButton);     add at the before of node(outside)
// document.getElementById("listofitem").after(newButton);      add at the after of node(outside)

// add a new heading
let newHeading = document.createElement("h1");
newHeading.innerHTML = "<i>new Heading!!</i>";

document.querySelector("body").prepend(newHeading);

console.log("Hear we delet a one p tag :- ");
document.querySelector("p").remove();       // only with querySelector method it will delet this :- <p class="para">This is simple line.</p>





//<------------- This is for pratice question ------------->

// let p = document.querySelector("p");

// // p.setAttribute("class","newclass");  ==> when we add this line it will remove the old class.

// p.classList.add("newclass");  //==> when we add this line it will not remove the old class.
//                               // we have also delet method to delet the class.



