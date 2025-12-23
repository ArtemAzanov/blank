using System;
class Program {
    static void Main() {
        int[,] massive = {{2,3,6},{3,9,1},{1,2,3}};
        
        int[] y = new int[3];
        y[0] = massive[0,0];
        y[1] = massive[1,1];
        y[2] = massive[2,2];
        
        Console.Write("Диагональ ");
        Console.Write(y[0] + " " + y[1] + " " + y[2]);
        Console.WriteLine();
        
        int max = y[0];
        if(y[1] > max) max = y[1];
        if(y[2] > max) max = y[2];
        
        Console.WriteLine("Максимум " + max);
        
        double[] result = new double[3];
        result[0] = (double)y[0] / max;
        result[1] = (double)y[1] / max;
        result[2] = (double)y[2] / max;
        
        Console.Write("Результат ");
        Console.Write(result[0] + " " + result[1] + " " + result[2]);
    }
}
