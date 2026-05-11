// 1011 - Esfera - beecrowd

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const PI = 3.14159;

const raio = parseInt(lines[0]);
const vol = 4/3 * PI * Math.pow(raio, 3);

console.log(`VOLUME = ${vol.toFixed(3)}`);

