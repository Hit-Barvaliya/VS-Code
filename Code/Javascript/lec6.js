// DOM is used for changes dynamic changes in webpages

console.log("Hello in Java script");

// alert("Apana colage");

// console.dir(document);  // this is use to print all the method and variable of object

window.console.log("Hello with the window object");
// this object was created by-default in the .js file

// console.log(document.body.childNodes[3].innerText = "abcd");

let heading = document.getElementById("myid12");
console.log("This is my heading :- "+heading);  // if this is empty it is null

let headings = document.getElementsByClassName("myclass");
console.log("This is my class id :- "+headings);    // if this is empty it will zero-size Node list
console.dir(headings);

let ptag = document.getElementsByTagName("p");  // it will return all the p'p' tags
console.log("This is p tag :- "+ptag);
console.dir(ptag);

let fEle = document.querySelector("p"); // it will return the first p tag
console.log("This is first p tag :- ");
console.log(fEle);

let allEle = document.querySelectorAll("p"); // it will return the all p tags as all NodeList
console.log("This is all p tag :- ");
console.dir(allEle);

// we can also access the class and id with the querySelector
let cls1 = document.querySelector(".myclass");
console.log("This is my class  :- ");    
console.dir(cls1);

let cls2 = document.querySelectorAll(".myclass");
console.log("These are all my class  :- ");    
console.dir(cls2);

let cls3 = document.querySelector("#myid");
console.log("This is my id :- ");    
console.dir(cls3);

/* we have three properties in DOM Models
 1. tagName : return tagName for element Node
 2. innerTax : return the content of the element and all its children
 3. innerHTML : return the plain Tax of it's HTML content in the HTML tag
 4. TextContent : return textual content even for hidden elements
*/

/*
we have four property in DOM Model
1. tagName : it will return tagname for element
2. innerTaxt : return the content of the element and all its hild
3. innerHTML : return the plain Taxt of it's HTML content in the HATML tag
4. TaxtContent : return textual content even for hidden HTML elements
*/
console.log("\nThese are the four property of the Document Object Model :- \n\n");
letdiv1 = document.querySelector("div");
console.log("This is for first element if div :- ");
console.log(letdiv1);

console.log("This is innerHTML tag :- ");
console.log(letdiv1.innerHTML);

console.log("This is your innetTaxt :- ");
console.log(letdiv1.innerText);

console.log("This is for the TextContent :- ");
console.log(letdiv1.textContent);

let heading3 = document.querySelector("h3");
// heading3.innerText = "new heading 123";

let hide = document.querySelector("h1");
console.log("This is with the innerTaxt :- "+hide.innerText);
console.log("This is with the textContent :- "+hide.textContent);

console.log("This is for for-of loop :- ");
let divs = document.querySelectorAll(".box");
let indx = 1;
for(div of divs){
    // console.log(div.innerText);
    div.innerText = div.innerText + `with update ${indx}.`;
    indx++;
}
