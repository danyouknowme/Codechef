process.stdin.resume();
process.stdin.setEncoding('utf8');

let input = "";
process.stdin.on('data', function(chuck) {
    input += chuck.toString();
});

process.stdin.on('end', function() {
    gradeTheSteel(input);
});

function gradeTheSteel(args) {
    let arr = args.split("\n");
    let n = arr[0];
    for (let i=1; i<=n; i++) {
        [hardness, carbon, tensile] = arr[i].split(" ").map((x) => +x);
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
}
