// 1017 - Gasto de Combustivel - beecrowd

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const consumo = 12;

const tempo = parseInt(lines[0]);
const vMedia = parseInt(lines[1]);

const quant = (vMedia * tempo) / consumo;

console.log(quant.toFixed(3));
