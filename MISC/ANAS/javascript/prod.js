var input = require('fs').readFileSync('/dev/stdin', 'utf8')

var values = input.split("\n")

A = values.shift()
B = values.shift()

var PROD = A * B

console.log('PROD = ' + PROD)