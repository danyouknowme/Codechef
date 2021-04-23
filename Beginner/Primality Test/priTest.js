const readline = require('prompt-sync')({sigint: true});
const n = Number(readline());
for (let i=0; i<n; i++) {
  let isprime=0;
  let num = Number(readline());
  for(let j=1; j<num+1; j++) {
    if (num % j === 0) {
      isprime += 1;
    }
  }
  if (isprime === 2) {
    console.log("yes\n");
  } else {
    console.log("no\n");
  }
} 
