const readline = require('prompt-sync')({sigint: true});
const n = Number(readline());
let arr = new Array(n);
let num = readline().split(" ");
for (let i=0; i<n; i++) {
    arr[i] = num[i];
}
let even=0, odd=0;
for (let j=0; j<n; j++) {
    if (arr[j] % 2 == 0) {
        even++;
    } else {
        odd++;
    }
}
if (even > odd) {
    console.log("READY FOR BATTLE");
} else {
    console.log("NOT READY");
}
