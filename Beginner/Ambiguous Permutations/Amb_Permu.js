const readline = require("prompt-sync")({sigint: true});
let n = Number(readline());
while (n!=0) {
    let num = new Array(n), zeros = new Array(n);
    let arr = readline().split(" ");
    for (let i=1; i<=n; i++) {
        num[i-1] = i;
        zeros[i-1] = 0;
    }
    for (let j=0; j<n; j++) {
        zeros[arr[j]-1] = num[j];
    }
    let check = new Boolean(true);
    for (let k=0; k<n; k++) {
        if (arr[k] !== zeros[k]) {
            check=false;
        }
    }
    if (check) {
        console.log("ambiguous");
    } else {
        console.log("not ambiguous");
    }
    n = Number(readline());
}
