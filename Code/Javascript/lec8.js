
// if we have event in both javascript and html code then javascript code has high priority
let but = document.getElementById("but2");
but.ondblclick = () => {
    console.log("You click the button 2x. in first heading")
}
// when we over-ride the events that time last event will execute
let but2 = document.getElementById("but2");
but2.ondblclick = () => {
    console.log("You click the button 2x. in second heading")
}


// <--------------- This is for box1's event --------------->

let b = document.getElementById("box");
let count = 0;
// this is event Object and we have some special method for this
b.onmouseover = (evt) => {
    // console.log(`Your are in the box ${count} time.`);
    count++;

    console.log(`This is event object `);
    console.log(evt);
    console.log("This is event type :- "+evt.type);
    console.log("This is event target :- "+evt.target);
    console.log("This is positio in (x,y) :- ("+evt.clientX+","+evt.clientY+")")
    // console.log(evt.type)
}

// <--------------- This is for box2's event --------------->

// This is all about the event listener
// we will use EventListner most of time beacuse we can write multipal times for the same element
//      while in previous method it was over-ride
let b2 = document.getElementById("button3");

b2.addEventListener("click",() => {
    console.log("You Click in button which is in the box.");
})
// this is second way to write this
document.getElementById("button3").addEventListener("click",() => {
    console.log("This is in the second EventListner.");
})

// this is about delet-event
let b4 = document.getElementById("button4");
const pera = () => {
    console.log("This is HEADER 3");
};

b4.addEventListener("click",() => {
    console.log("This is HEADER 1");
});

b4.addEventListener("click",() => {
    console.log("This is HEADER 2");
});

b4.addEventListener("click",pera);  // this will remove only HEADER 3 only rest of all others are different EventListeners

b4.addEventListener("click",() => {
    console.log("This is HEADER 4");
});
// the call-backe reference should be same to the add & remove
b4.removeEventListener("click",pera);

// <---------------- This is pratice Question ---------------->

let but5 = document.querySelector("#mode");
let currMode = "light";

but5.addEventListener("click",() => {
    if(currMode === "light"){
        currMode = "dark";
        document.querySelector("body").style.backgroundColor="black";
        document.querySelector("body").style.color="white";
    } else {
        currMode = "light";
        document.querySelector("body").style.backgroundColor="white";
        document.querySelector("body").style.color="black";
    }
    console.log(currMode);
});

// this is second approch

let but6 = document.querySelector("#mode2");
let currMode2 = "lightMode";
let body = document.querySelector("body");

body.classList.add("lightMode");

but6.addEventListener("click",() => {
    if(currMode2 === "lightMode"){
        currMode2 = "darkMode";
        body.classList.add("darkMode");      
        body.classList.remove("lightMode");  
    } else {
        currMode2 = "lightMode";
        body.classList.add("lightMode");      
        body.classList.remove("darkMode");  
    }
    console.log(currMode2);
})
// hear in the second approch we add CSS style which is less priority then JavaScript changes so it will not working with the first approch
// if you want to chack then comment-out the first method


