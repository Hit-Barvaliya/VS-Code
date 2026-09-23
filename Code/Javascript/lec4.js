// this is for array 

let marvel_heros = ["ironman","hulk","antman"];

for(let i=0;i<marvel_heros.length;i++){
    console.log(marvel_heros[i]);
}

console.log("\nThis is second ::\n")
for(let i of marvel_heros){
    console.log(i.toUpperCase());
}

marvel_heros.push("loki");
console.log("\nAfter the push\n");
for(let i of marvel_heros){
    console.log(i);
}
marvel_heros.pop();
// in the JavaScript, both operation push() & pop() will happen at last
console.log("\nAfter the pop\n");
for(let i of marvel_heros){
    console.log(i);
}

let dc_heros = ["superman","batman"];
let indian_heros = ["shaktiman","krish"];

let heros = marvel_heros.concat(dc_heros,indian_heros);
console.log("\n after concatination ::\n");
for(let i of heros){
    console.log(i);
}

let variable = marvel_heros.shift();   // -> it will delet the first element
console.log("\n After shift operatio ::\n");
for(let i of marvel_heros){
    console.log(i);
}
console.log("Your deleted elemenet is  :- " + variable+"\n");

marvel_heros.unshift("wonda");   // -> it will add the at first
console.log("\n After unshift operatio ::\n");
for(let i of marvel_heros){
    console.log(i);
}
/*
push() -> is used to add element at end
shift() -> is used to add element at front
pop() -> is used to delet element from last
unshift() -> is used to delet element from front
*/

let array = [1,2,3,4,5,6,7,8];
console.log(array);
console.log("After the splice method\n");
// -> slice mathod is same as string method which is in lec:-3
array.splice(2,3,101,102,103,104,105);  //-> (startIndex,numberOfIndex,replacemantElement)
    // it also return the array which is delet
console.log(array);


