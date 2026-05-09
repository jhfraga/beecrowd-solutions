// 1005 - Media 1 - beecrowd

var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const A = parseFloat(lines[0]);
const B = parseFloat(lines[1]);

const wA = 3.5, wB = 7.5;
const sW = wA + wB;

const MEDIA = ((A * wA) + (B * wB)) / sW;

console.log('MEDIA = ' + MEDIA.toFixed(5));

