let array = [5, -2, 0, 3, 4, 12, 7];
let summa = 0;
let polozh = 0;
for (let i = 0; i < array.length; i++) {
    if (array[i] > 0) {
        summa += array[i];
        polozh++;
    }
}
let W = summa / polozh;
for (i = 0; i < array.length; i++) {
    if (array[i] > W) {
        array[i] = W
    }
}
alert(array);