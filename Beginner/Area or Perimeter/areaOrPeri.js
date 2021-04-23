const readline = require('prompt-sync')({sigint: true});
const a = readline();
const b = readline();
let area=Number(a)*Number(b), peri=2*(Number(a)+Number(b));
if (area > peri) {
    console.log("Area");
    console.log(Number(area));
} else if (area < peri) {
    console.log("Peri");
    console.log(Number(peri));
} else {
    console.log("Eq");
    console.log(Number(area));
}
