console.log("I am a tutorial on loops");
let a = 1;
// for(let i = 0; i < 100; i++){
//     console.log(a + i);
// }

let obj = {
    name : "Ramu",
    role : "Mali",
    company : "Rampal and sons",
    salary : 199999,
}
for (const key in obj) {
    console.log(key);
}

let i = 1;
while(i<6){
    console.log(i);
    i++;
}
j = 1;
do {
    console.log(j);
    j++;
} while (j < 10);