// alert("hello")
// console.log("Voila!")
// const name = 'Dhruv'
// const age = 32
// const s = `Hello! My name is ${name} and I am ${age} years old.`
// console.log(s.substring(0,5).toUpperCase())
// const arr = s.split(" ")
// console.log(arr)

const todos = [
    {
        priority: 1,
        task: 'BUY',
        stock: 'hinduliver',
        exchange: 'NSE'
    },
    {
        priority: 2,
        task: 'SELL',
        stock: 'finance',
        exchange: 'BSE'
    }
]

// const h = todos.forEach(function(todo){
//     return (todo.stock)
// })
// console.log(h)












function placeOrder(stock = 'error' ,exchange = 'BSE'){
    console.log(`stock order of '${stock}' has been successfully placed at '${exchange}'`)
}

// placeOrder(todos[0].stock.toUpperCase(),todos[0].exchange)
placeOrder()