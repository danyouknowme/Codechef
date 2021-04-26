process.stdin.resume();
process.stdin.setEncoding('utf8');

// your code goes here
data = "";
process.stdin.on('data', function(chuck) {
    data += chuck;
});

process.stdin.on('end', function() {
    theBlockGame(data);
});

function theBlockGame(args) {
    input = args.split("\n");
    n = Number(input[0]), num = Number(input[1]);
    for (let i=0; i<n; i++) {
        let temp=num, rev=0;
        while (num>0) {
            let dig;
            dig = num/10;
            rev = rev*10+dig;
            num = Math.round(num/10);
        }
        if (temp==rev) {
            console.log("wins");
        } else {
            console.log('loses');
        }
    }
}
