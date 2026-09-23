// this is about the function

function sum(a,b){
    return a+b;
}
function tryfun(){
    console.log("tryfun is void type function :- ");
}
let addition = sum(10,20);
console.log("The addition of 10 and 20 is :- "+addition);

tryfun();

// <----------------------THIS IS AN ARROW NFUNCTION---------------------->
const mul = (a,b) => {
    return a*b;
};

console.log("The multiplication of 5 and 4 is :- " + mul(5,4));

const printHello = () => {console.log("Hello");console.log("WORLD");};

printHello();

console.log("\nnow count vowels ::\n\n");

let str = "apanacollage";
let count = 0;
for(const i of str){
    if(i==='a'||i==='e'||i==='i'||i==='o'||i==='u')
            count++;
}
console.log("In your String number of volwels are :- "+count);

//<----------------------THIS IS FOR-EACH FUNCTION---------------------->

let arr = [1,2,3,4,5,6,7,8,9,10];

// in java-script we can pass the function in to the other function as a parameter
console.log("This is combination of two function :- ");

function abc (like){
    console.log("hello in abc THIS FOR LIKE :- "+like);
    
}
function myFunc(abc){
    console.log("Hello in myFunc");
    return abc;
}
let returneFunction = myFunc(abc);

returneFunction();
returneFunction("ZXYW");

arr.forEach(function printval(val,index,arr){
    // hear val, index, and array is passed by-default 
    // some of them are not allow in String array
    console.log(`your val is ${val} index is ${index} array is :- ${arr}`);
});

// we can also write with arrow function
arr.forEach((val,index)=>{
    console.log(`in arrow function, val is ${val} index is ${index}`);
});

//<-----------------HEIGHER ORDER FUNCTION------------------>
// if any function will return function or it's perameter is function then it is called ....
// Example :- forEach()

//<-----------------MAP FUNCTION------------------>
let newarr1 = arr.map((val) => {
    return val*val;
});
console.log("\n this is usede with map::\n\n");
console.log(newarr1);
/*forEach() is used to do some calculate while map() mathod is used to creat a new array with updated value*/

//<-----------------FILTER FUNCTION------------------>
let newarr2 = arr.filter((val) => {
    return val%2===0;
});
console.log("\nAfter the use a filter method:: \n\n");
console.log(newarr2);

//<-----------------REDUCE FUNCTION------------------>
const output = arr.reduce((pre,curr)=>{
    return pre+curr;
})
console.log("find the sum of all the element from the array :- "+output);

const output2 = arr.reduce((pre,curr)=>{
    return pre<curr?curr:pre;
})
console.log("find the biggest number from the array :- "+output2);
 





