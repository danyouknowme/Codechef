process.stdin.resume();
process.stdin.setEncoding('utf8');

// your code goes here
let input = "";
process.stdin.on("data", (params) => {
    input += params;
})

process.stdin.on("end", () => {
    const test = input.split("\n");
    const n = test[0].split(" ")[0];
    const k = test[0].split(" ")[1];
    let testCase = test.slice(1, test.length);
    let l = [];
    let rel = 0;
    for (let i=0; i<test.length-1; i++) {
        let s = testCase[i].split(" ");
        if (s[0] === "CLOSEALL") {
            rel = 0;
            l = [];
        } else if (l.indexOf(s[1]) > -1) {
            rel--;
            l.splice(l.indexOf(s[1]), 1);
        } else {
            rel++;
            l.push(s[1]);
        }
        console.log(rel);
    }
})
