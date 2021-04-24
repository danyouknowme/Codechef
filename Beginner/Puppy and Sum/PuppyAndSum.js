const readline = require('prompt-sync')({sigint: true});
const n = Number(readline());
for (let i=0; i<n; i++) {
    let input = readline().split(" ");
    let a=Number(input[0]), b=Number(input[1]);
    let ans=0;
    for (let j=0; j<a; j++) {
        ans = (b*(b+1))/2;
        b = ans;
    }
    console.log(ans);
} 
