process.stdin.resume();
process.stdin.setEncoding('utf8');

let input = "";
process.stdin.on('data', function(chuck) {
    input += chuck.toString();
});

process.stdin.on('end', function() {
    addTwoNums(input);
});

function addTwoNums(args) {
    argument = args.split("\n");
    for ( var index=1; index<=argument[0]; index++ ) {
        var [a, b] = argument[index].split(" ");
        console.log((+a) + (+b));
    }
}
