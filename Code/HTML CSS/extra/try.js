console.log("Hello in JS");

let form = document.querySelector("form");

form.addEventListener("submit", function(event) {
    event.preventDefault(); // Always prevent reload

    let n = document.getElementById("name").value.trim();
    if (n === "") {
        console.log("Name is required");
    } else {
        console.log("Registration is done :- ");
        console.log("Name :- " + n);
        // You can display a message or process the data here

        // let newname = document.createElement("h2");
        // newname.innerHTML = "THIS IS NEW :- "+ n +"-:";
        // document.querySelector("body").after(newname);


        let newHeading = document.createElement("h3");
        newHeading.innerHTML = "<i>your name is  :- "+n+"</i>";
        document.querySelector("form").after(newHeading);
            

    }
});

console.log("This is fifth practical :- ");

// let students = [
//   { id: 1, name: "Rahul Sharma", age: 20, course: "B.Tech" },
//   { id: 2, name: "Priya Patel", age: 21, course: "BCA" },
//   { id: 3, name: "Aman Verma", age: 22, course: "MCA" },
//   { id: 4, name: "Neha Singh", age: 19, course: "M.Tech" }
// ];

let jsonString = '[{"id":1,"name":"Rahul","age":20,"course":"B.Tech"}]';
console.log("THis is JS String :- ");
console.log(jsonString);

console.log("This is JS Object :- ");
// this is used for to convert string to object
let data = JSON.parse(jsonString);
console.log(data[0]);  // Output: Rahul

// JASON.stringfy()  ==> this is method to convert object into String

// console.log("This is JS Script object :- ");
// console.log(students[0]);

function openpopup() {
    document.getElementById("popup").style.display = "block";
}
function closepopup() {
    document.getElementById("popup").style.display = "none";
}



