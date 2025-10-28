
    double[] array = { 5, -2, 0, 3, 4, 12, 7 };
    double summa = 0;
    double polozh = 0;
    double size = 7;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            summa += array[i];
            polozh++;
        }
    }
    double W = summa / polozh;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > W)
        {
            array[i] = W;
        }
    }
    for (int i = 0; i < size; i++)
    {
    Console.WriteLine(array[i]);
    }
Console.WriteLine("Среднее арифметическое число: " + W);

