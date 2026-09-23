// this is for loops 
// learn for, while, do..while are same as other language

// more two type of loop is 'for-in' and 'for-of'


// for-of loop is used for array


let str = "Apana Collage";
var count = 0;
console.log("This is for-of loop which is used for array :- ");
for (let i of str){
    console.log("i => " + i);
    count++;
}

// this is conform box
if (confirm("This text is written in the confirm box, \nIn the confirm box we can also tap on the cancel button which get different output")){

console.log("The size of string is :- " + count);

let student = {
    name : "Rahul",
    age : 20,
    cgpa : 8,
    isPass : true,
    marks : [1,2,3,4,5,6,7,8,9],
}   

// this loop is used for object
console.log("This is for-in loop which is used for Objects :- ");
for (let i in student){
    // it will return the key-value
    // console.log("Key :- "+i+" Value :- "+student.i);
    console.log("Key :- "+i+" Value => "+student[i]);
}

for(let i=1;i<=100;i++){
    if(i%2==0)
            console.log("i => "+i);
}


let rightnum = 25;
let number = prompt("Gusse the number for the game :- ","enter a number hear");

while(number != rightnum){
    number = prompt("Gusse the number for the game :- ");
}
console.log("':: Congrulation you gusse right number is :: '");

let obj = {
     cost : 20,
     item : "pen"
};

// hear cost is in the number
console.log("The cost of "+obj.item+" is "+obj.cost+" ruppes.");

// introduce "string-literal"
// hear cost is in the string
let update = `The cost of ${obj.item} is ${obj.cost} ruppes`;
console.log(update);

// first value is calculated after that it is converted in to the string
console.log(`This is template litreals :- ${1+2+2}`);


//<-----------METHOD OF STRING------------->

/*  List of Method which are same as 'JAVA'
 -> toUpperCase(), toLowerCase(), trim(), replace(), replaceAll(), charAt()
*/

let str1 = "hello in java script";
console.log("with double index :- "+str1.slice(3,10));      // work in this formate :- '[1,10)'
console.log("with single index :- "+str1.slice(5));

// concatination is done with '+' and '.concat()'
let newstr = "@"+str1+str1.length;
console.log(newstr);
}
// confirm box is end hear which start from line No. 19

else {
    console.log("Youe pressed to cancle");

    // d = new Date();     // returns 1404568027739 
// The date method getTime() does the same.
d = new Date();
d.getTime()   
console.log("The date is :- "+d);  

console.log("The math is :- "+Math.random()*100);

console.log("The LN2 is :- "+Math.LN2);     // ==>LN(2)=loge(2) = 0.6931


}
