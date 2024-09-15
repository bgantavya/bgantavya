
let a = Math.random()
let b = prompt("Enter 1st no.")
let c = prompt("Enter operation")
let d = prompt("Enter 2nd no.")

let op = {
    '+': '-',
    '*': '+',
    '-': '/',
    '/': '**',
    '**': '*',
}
// alert(`the value of ${b}${c}${d} is ${eval(`${b} ${c} ${d}`)} `)
if (a < 0.1) {
    c = op[c]
    alert(`the value of ${b}${c}${d} is ${eval(`${b} ${c} ${d}`)} `)

}
else {
    alert(`the value of ${b}${c}${d} is ${eval(`${b} ${c} ${d}`)} `)
}