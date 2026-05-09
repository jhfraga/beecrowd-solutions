// 1006 - Media 2 - beecrowd

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const A = parseFloat(lines[0]);
const B = parseFloat(lines[1]);
const C = parseFloat(lines[2]);

const wA = 2, wB = 3, wC = 5;
const sW = wA + wB + wC;

const MEDIA = ((A * wA) + (B * wB) + (C * wC)) / sW;

console.log('MEDIA = ' + MEDIA.toFixed(1));

