#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double array[] = {5, -2, 0, 3, 4, 12, 7};
    double summa = 0;
    double polozh = 0;
    double size = 7;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0) {
            summa += array[i];
            polozh++;
        }
    }
    double W = summa / polozh;
    for (int i = 0; i < size; i++) {
        if (array[i] > W) {
            array[i] = W;
        }
    }
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl << "Среднее арифметическое положительных: " << W << endl;
}
