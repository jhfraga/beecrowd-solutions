// 1072 - Intervalo 2 - beecrowd

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const n = parseInt(lines[0]);
let inn = 0;
let out = 0;

for (let i = 0; i < n; i++) {
	let x = parseInt(lines[i + 1]);
	if (x >= 10 && x <= 20){ inn++; }
	else { out++; }
}

console.log(`${inn} in`);
console.log(`${out} out`);
