process.stdin.resume();
process.stdin.setEncoding('utf8');

process.stdin.on('data', (i) => {
    let arr = i;
});
process.stdin.on('end', () => {
    console.log(myFunction(arr));
});

function myFunction(args) {
    let arr = args.split("\n");
    let [n, k] = arr[0].split(" ");
    let ans=0;
    for (let i=1; i<n+1; i++) {
        if (Number(arr[i] % k) === 0) {
            ans++;
        }
    }
    return ans;
}
