const readline = require('prompt-sync')({sigint: true});
const n = Number(readline());
for (let i=0; i<n; i++) {
    let x = Number(readline());
    if (x % 10 === 0) {
        console.log("0");    
    } else if (x % 5 === 0) {
        console.log("1");    
    } else {
        console.log("-1");
    }
} 
