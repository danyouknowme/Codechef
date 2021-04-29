const readline = require("prompt-sync")({sigint: true});
const n = Number(readline());
for (let i=0; i<n; i++) {
    let sum=0;
    let num = Number(readline());
    while (Math.round(num/5) !== 0) {
        sum += Math.round(num/5);
        num = Math.round(num/5);
    }
    console.log(sum);
}
