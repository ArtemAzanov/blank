Console.WriteLine("введите x:");

double x = Convert.ToDouble(Console.ReadLine());
Console.WriteLine("введите y:");
double y = Convert.ToDouble(Console.ReadLine());
double a = (14 * Math.Sin(x) + Math.Pow(y, 2)) / (0.92 * Math.Pow(Math.Cos(x), 3));
Console.WriteLine(a);

