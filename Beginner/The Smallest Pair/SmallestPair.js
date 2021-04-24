const readline = require('prompt-sync')({sigint: true});
const testcases = Number(readline());
for (let i=0; i<testcases; i++) {
    let arr_sz = Number(readline());
    let arr = new Array(arr_sz);
    let input = readline().split(" ");
    for (let j=0; j<arr_sz; j++) {
        arr[j] = Number(input[j]);
    }
    arr.sort();
    console.log(arr[0]+arr[1]);
}
