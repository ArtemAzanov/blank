function raschet(a, b, c)
{
    return (a + b + c) / 2;
}


function tema(a, b, c)
{
    let p = raschet(a, b, c);
    return Math.sqrt(((p - a) * (p - b)) / (p * (p - c)));
}


function main()
{
    let a, b, c;
    a = +prompt("Введите a");
    console.log(a);
    b = +prompt("Введите b");
    console.log(b);
    c = +prompt("Введите c");
    console.log(c);

    let result = tema(a, b, c);
    console.log(result);
    alert(result);

}

main();