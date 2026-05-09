// 1009 - Salario com Bonus - beecrowd

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const nome = lines[0];
const salario = parseFloat(lines[1]);
const vendas  = parseFloat(lines[2]);

const total = salario + vendas * 0.15;

console.log(`TOTAL = R$ ${total.toFixed(2)}`);

