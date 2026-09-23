// this code is for practice

const patients = [
{
    name: "Ritesh",
    temperature: [98.6, 99.2, 100.4, 102.1, 101.3],
    covidTest: false
},
{
    name: "Kavya",
    temperature: [97.8, 98.2, 98.6, 99.0, 99.5],
    covidTest: false
},
{
    name: "Arjun",
    temperature: [99.1, 100.5, 101.8, 103.2, 102.7],
    covidTest: true
},
];

for(let i in patients){
    let check = patients[i].temperature.filter((val) =>{
        return val>102.0;
    });
    if(check.length != 0){
        console.log(patients[i].name);
    }
}

console.log("This is secod task");

for(let i in patients){
    let sum = patients[i].temperature.reduce((pre,cur) => {
        return pre+cur;
    });
    sum = sum / patients[i].temperature.length;
    console.log(`Name is :- ${patients[i].name} average temperature is :- ${sum}`);
}



























console.log("<----------------type of Copy---------------->");

const original = {
    name : "John",
    address : {
        city : "Delhi",
    }
}

// const Copy = {...original}; //=> it will make copy at only first level
// const Copy = Object.assign(original);        // => this is will make a copy reference
const Copy = JSON.parse(JSON.stringify(original))   // => This is will make a independent copy of object

Copy.name = "Week";
Copy.address.city = "Mumbai";

console.log("This is original :- "+original.name+" => "+original.address.city);
console.log("This is Copy :- "+Copy.name+" => "+Copy.address.city);

// if any variable was null, JS engine will remove that object from the memory in the next cycle

console.log("<----------------Primitive Conversion---------------->");

const person = {
    name : "ABCDEF",
    age : 25,
    toString(){
        return this.name;
    },
    valueOf(){
        return this.age;
    }
};

console.log("This is for valueOf :- "+(person+5));
console.log("This is for toString :- "+String(person));


const product = {
    name : "Book",
    price : 50,

    [Symbol.toPrimitive](hint){
        if(hint === "string")    return this.name;
        if(hint === "number")    return this.price;
        return this.name;
    }

    // toString(){
    //     console.log("This is toString block");
    //     return this.name;
    // },
    // valueof(){
    //     console.log("This is valueof block");
    //     return this.price;
    // }
}

console.log(String(product));
console.log(+product);
console.log(product+" SELL");



console.log("<----------------String Methods---------------->");

let str1 = "This is first String";
console.log(str1.toUpperCase());
console.log(str1.replace(" ","#"));
console.log(str1);
console.log(str1.replaceAll(" ","#"));

console.log("<----------------number Methods---------------->");

let num1 = 123.456;
console.log(num1.toFixed(1));
console.log(num1.toString() + 12.001);
var temp = `1234.5678`;
/* three type of String
1. let str = "ABCD"
2. let str = 'ABCD'
3. let str = `ABCD`
*/
console.log(parseInt(temp));    // convert into the int
console.log(parseFloat(temp));  // conver into the Flot
console.log("Is number or not :- "+isNaN(temp));       // check is number or not


console.log("<----------------Boolean Methods---------------->");

let bool = true;
console.log(typeof(bool));
console.log(bool.toString());

console.log("<----------------BigInt Methods---------------->");

let big = 123456789012345678901234567890n;
console.log(typeof(big));
console.log(big);
console.log(big.toString());

console.log("<----------------Array Methods---------------->");

let arr = [1,2,3,4,5,6];
let str = arr.join();

console.log(typeof(str)+" => "+str);

console.log("<----------------Custom Iterable---------------->");

const num = {
    start : 1,
    end : 5,

    [Symbol.iterator](){
        let current = this.start;
        let end = this.end;

        return {
            next(){
                if(current<= end){
                    return {value : current++, done : false};
                } else {
                    return{done : true};
                }
            }
        };

    }
};

for(let n of num){
    console.log(n);
}

console.log("<----------------Convert JSON to JS---------------->");

const user = {
    name : "ABCD",
    age : 25,
    skill : ["JS","HTML"],
}

let json = JSON.stringify(user);
console.log("This is in JSON");
console.log(json);

let js = JSON.parse(json);
console.log("This is java script");
console.log(js);


console.log("<--------------------------------------------------------->");




