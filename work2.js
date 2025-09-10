let x = +prompt("введите x")
x = Math.sqrt(x)
if(x < 1){
    alert("Зелёный")
}else if (x > 1  &&  x < 10){
    alert("Жёлтый")
}else if (x > 10){
    alert("Красный")
}