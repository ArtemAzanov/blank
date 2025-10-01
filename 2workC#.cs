using System.Reflection.Emit;
using System;

Console.WriteLine("введите x:");
double x = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("введите y:");
double y = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("введите a:");
double a = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("введите b:");
double b = Convert.ToDouble(Console.ReadLine());
double z = 0;
if (x > 0  &&  y > 0){
    double maxEl = a / x; 
    if (maxEl < b/x){
        maxEl = b / x;
    }
    if (maxEl < Math.Sqrt(y))
{
        maxEl = Math.Sqrt(y);
        z = maxEl;
    }
}
else if (x < 0 && y > 0)
{
    double minEl = a * Math.Pow(x, 3);
    if (minEl > b * Math.Pow(y, 2))
    {
        minEl = b * Math.Pow(y, 2);
        z = minEl;
    }
}
else
{
    z = (Math.Pow(2, x + y));
    
}
Console.WriteLine(z);

