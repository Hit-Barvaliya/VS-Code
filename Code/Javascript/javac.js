console.log('Hello');
let x = "Hello world";
console.log(typeof(x));

// this is integer type vriable
console.log('Integer is here :- ');
let y = 10;
console.log(typeof(y));

// this is string
console.log('this is string :- ');
let z = 'charusat';
console.log(typeof(z));

// this is float
console.log("'this is flot number :- '");
let a = 123.456;
console.log(typeof(a));

console.log('"this is for cahracter"');
let b = "a";
console.log(typeof(b));

console.log(`this is + operator :- `);
let c = (5+6)*10;
console.log('type of c is  :- '+typeof(c)+"  value is :- "+c);

// this is object data-type in JS

const student = {
    fullName : "Hit Barvaliya",
    age : 19,
    cgpa : 7.1,
    isPass : true
};


// hear two way to assccess the variable of object
console.log(student.fullName);
console.log(student["fullName"]);

// we can change the value of const-object but not to the const variable
student.fullName = "BARVALIYA HIT";
student.age += 1;

console.log("After cahnge the value :- ");
console.log(student.fullName);
console.log(student["age"]);