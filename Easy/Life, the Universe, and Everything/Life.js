process.stdin.resume();
process.stdin.setEncoding('utf8');

// your code goes here

data = ""
process.stdin.on('data', function(chuck) {
    data += chuck;
})

process.stdin.on('end', function() {
    breakFunction(data);
})

function breakFunction(args) {
    let lines = args.split("\n").map(Number);
    for (let i=0; i<lines.length; i++) {
        if (lines[i] === 42) {
            break;
        } else {
            console.log(lines[i]);
        }
    }
}
