process.stdin.resume();
process.stdin.setEncoding('utf8');

let input = '';
process.stdin.on('data', function(chuck) {
    input += chuck;
});

process.stdin.on('end', function() {
    let entry = input.split(' ');
    let withdraw = parseInt(entry[0]);
    let balance = parseFloat(entry[1]);
    console.log(atm(withdraw, balance));
});

function atm(withdraw, balance) {
    if (withdraw % 5 === 0 && (withdraw+0.5 <= balance)) {
        balance -= (withdraw+0.5);
    }
    return balance;
}
