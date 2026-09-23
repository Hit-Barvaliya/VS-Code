// objects are assigned and passed by reference not by the value
console.log("HELLO HELLO HELLO HELLO");

// we have many method of object creation
const student = {
    // every object have a prototype object which prototype object has lot-of special attributs and methods
    fullName : "shradha khapara",
    marks : 94.4,
// we have many method of Method creation
    printMarks : function() {
        console.log("Your Marks is :- "+this.marks);
    },
}

console.log(student.fullName);
console.log(student.marks);
student.printMarks()

console.log("\n This is for second \n");

const employee = {
    calcTax(){
        console.log("Tax rate is :- 10%");
    }
}

const karanArjun = {
    salary : 50000,
}

// with '__proto__' keyword we can access the 'calcTax()' with the karanArjun object
// __proto__ is reference to an object
karanArjun.__proto__ = employee;

console.log(karanArjun.salary+" => ");
karanArjun.calcTax();



const karanArjun2 = {
    salary : 54321,
    calcTax(){
        console.log("Tax rate is : 20%");
    }
}

// if both karanArjun and employee have same function then it will execute own function
karanArjun2.__proto__ = employee;

console.log(karanArjun2.salary+" => ");
karanArjun2.calcTax();

// this is about the class

// we have no need of "commas" in classes
class ToyotaCar {

    constructor(brand,milage){
        this.brand = brand;
        console.log("This is construtor block");
        this.milage = milage;
        // hear a no concept of constructor over-loading
    }

    start() {
        console.log("The car will start");
    }
    stop() {
        console.log("The car will stop");
    }
    // setBrand(brand){
    //     this.brand = brand;
    // }
}

console.log("<----------------This is class---------------->");

let fortunar = new ToyotaCar("FORTUNAR");
// fortunar.setBrand("FORTUNAR");
let lexus = new ToyotaCar("LEXUS",12);
// lexus.setBrand("LEXUS");
console.log(lexus);
console.log(fortunar);


console.log("<----------------This is for inheritance---------------->");

class Person{
    constructor (){
        console.log("Enter Parent constructor");
        this.species = "homo sapiens";
        console.log("Exit Parent constructor");

    }

    eat(){
        console.log("Eating ...");
    }
    sleep(){
        console.log("Sleeping ...");
    }
    work(){
        console.log("Don Nothing {{{(>_<)}}} ");
    }
}

class Engineer extends Person {
    constructor(){
        console.log("Enter Child constructor");
        super();    // this will be written in any where in this block
        // we can also pass the perameter in super
        console.log("Exit Child constructor");
    }
    work(){
        console.log("Solve Problem, build Something .");
    }
}
class Doctor extends Person {
    work(){
        console.log("Check Patient");
    }
}

let e1 = new Engineer();
let d1 = new Doctor();

e1.eat(); e1.sleep(); e1.work();
d1.eat(); d1.sleep(); d1.work();

console.log("<----------------Error - Handling---------------->");

let a = 10,b = 20;

console.log(a+b);
console.log(a+b);
console.log(a+b);
console.log(a+b);
try{
    console.log(a+c);
} catch(err){
    console.log("This is error :- "+err);
}
console.log(a+b);
console.log(a+b);
console.log(a+b);
console.log(a+b);
