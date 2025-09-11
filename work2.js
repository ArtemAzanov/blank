let x = +prompt("введите x")
let y = +prompt("введите y")
let a = +prompt("введите a")
let b = +prompt("введите b")
let z
let maxEl
let minEl
if (x > 0  &&  y > 0){
    maxEl = a/x
    if (maxEl < b/x){
        maxEl = b/x
    }
    if (maxEl < Math.sqrt(y)){
        maxEl = Math.sqrt(y)
        z = maxEl
    }
}
else if (x < 0  &&  y > 0){
    minEl = a * Math.pow(x , 3)
    if (minEl > b * Math.pow(y , 2)){
        minEl = b * Math.pow(y , 2)
        z = minEl
    }
}
else {
    z = (Math.pow(2, x+y))
}
console.log(z)
alert(z)