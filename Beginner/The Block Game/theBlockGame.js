const readline = require("prompt-sync")({sigint: true});
let n = Number(readline());
for (let i=0; i<n; i++) {
    let num = Number(readline());
    let temp=num, rev=0;
    while (num>0) {
        let dig;
        dig = num%10;
        rev = rev*10+dig;
        num = Math.round(num/10);
    }
    if (temp == rev) {
        console.log("wins");
    } else {
        console.log("loses");
    }
}
