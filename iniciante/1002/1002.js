// 1002 - Area do Circulo - beecrowd

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const n = 3.14159;
const raio = parseFloat(lines[0]);

const area = n * Math.pow(raio, 2);

console.log(`A=${area.toFixed(4)}`);
