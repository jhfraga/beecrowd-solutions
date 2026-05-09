// 1008 - Salario - beecrowd

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const num        = parseInt(lines[0]);
const quantHoras = parseInt(lines[1]);
const valorHora  = parseFloat(lines[2]); 

const salario = quantHoras * valorHora;

console.log(`NUMBER = ${num}`);
console.log(`SALARY = U$ ${salario.toFixed(2)}`);

