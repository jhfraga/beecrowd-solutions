// 1013 - O Maior - beecrowd

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const a = parseInt(lines[0]);
const b = parseInt(lines[1]);
const c = parseInt(lines[2]);

const a = (a + b + Math.abs(a - b))/2;
const maior = (a + c + Math.abs(a - c)/2;

console.log(`${maior} eh o maior`);

