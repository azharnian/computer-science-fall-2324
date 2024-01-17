var input = require('fs').readFileSync('/dev/stdin', 'utf8')

var values = input.split("\n")

var A = values.shift()
var B = values.shift()

var PROD = A * B

console.log('PROD = ' + PROD)