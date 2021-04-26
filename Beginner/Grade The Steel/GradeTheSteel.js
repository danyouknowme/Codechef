const readline = require("prompt-sync")({sigint: true});
const n = Number(readline());
for (let i=0; i<n; i++) {
    let input = readline().split(" ");
    let hardness=Number(input[0]), carbon=Number(input[1]), tensile=Number(input[2]);
    if (hardness > 50 && carbon < 0.7 && tensile > 5600) {
		console.log(10);
	} else if (hardness > 50 && carbon < 0.7) {
		console.log(9);
	} else if (carbon < 0.7 && tensile > 5600) {
		console.log(8);
	} else if (hardness > 50 && tensile > 5600) {
		console.log(7);
	} else if (hardness > 50 || carbon < 0.7 || tensile > 5600) {
		console.log(6);
	} else {
	    console.log(5);
	}
}
