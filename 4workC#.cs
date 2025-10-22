
using System;

double raschet(double a, double b, double c)
{
    return (a + b + c) / 2;
}


double tema(double a, double b, double c)
{
    double p = raschet(a, b, c);
    return Math.Sqrt(((p - a) * (p - b)) / (p * (p - c)));
}

    Console.WriteLine("введите a:");
    double a = Convert.ToDouble(Console.ReadLine());
    Console.WriteLine("введите b:");
    double b = Convert.ToDouble(Console.ReadLine());
    Console.WriteLine("введите c:");
    double c = Convert.ToDouble(Console.ReadLine());
    double result = tema(a, b, c);
Console.WriteLine(result);



