process.stdin.resume();
process.stdin.setEncoding("utf8");

let input = "";

process.stdin.on("data", function(chunk) {
  input += chunk.toString();
});

process.stdin.on("end", function() {
  areaOrPeri(input);
});

function areaOrPeri(args) {
    let data = args.split("\n");
    let a=data[0], b=data[1];
    let area=Number(a)*Number(b), peri=2*(Number(a)+Number(b));
    if (area > peri) {
        console.log("Area");
        console.log(area);
    } else if (area < peri) {
        console.log("Peri");
        console.log(peri);
    } else {
        console.log("Eq");
        console.log(area);
    }
}

// const readline = require('prompt-sync')({sigint: true});
// const a = readline();
// const b = readline();
// let area=Number(a)*Number(b), peri=2*(Number(a)+Number(b));
// if (area > peri) {
//     console.log("Area");
//     console.log(Number(area));
// } else if (area < peri) {
//     console.log("Peri");
//     console.log(Number(peri));
// } else {
//     console.log("Eq");
//     console.log(Number(area));
// }
