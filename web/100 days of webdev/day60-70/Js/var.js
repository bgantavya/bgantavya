console.log("Hello users!sigma")
console.log("Hello mfs...")
let age = 78
let grace = 2;

if (age == 0) {
    console.log("Are you kidding?");
}
else if (age < 18) { console.log("you can't drive"); }
else if (age >= 18 || age <= 60) { console.log("You can drive"); }
else { console.log("Handle yourself") }

loops
let a=1;
console.log("Loops tutorial")
for(let i=0;i<100;i++){
    console.log(a+i);
}
let obj={
    name:"John",
    role:"programmer",
    company:"Sigma"
}
for (const key in obj){
    const element= obj[key];
    console.log(key,":", element)
}
for (const c of "Harry"){
    console.log(c)
}
a=0
while(a<6){
    console.log(a)
    a++;
}
console.log("Starting the loop...");
let i=0;
do {
    console.log(i);
    i++
} while (i<10);

