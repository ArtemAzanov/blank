const massive =  [[2, 3, 6],
                [3, 9, 1],
                [1, 2, 3]];
let y = [massive[0][0], massive[1][1], massive[2][2]];
console.log("Диагональ ", y);
let max = y[0];
if(y[1]>max){
    max = y[1];
}
if(y[2]>max){
max = y[2];
}
console.log("Максимум ", max);
let result = [y[0]/max, y[1]/max, y[2]/max];
console.log("Результат ", result);