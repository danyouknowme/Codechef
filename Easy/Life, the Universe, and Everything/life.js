const readline = require("prompt-sync")({sigint: true});
let num = Number(readline());
while (num !== 42) {
    console.log(num);
    num = Number(readline());
}
