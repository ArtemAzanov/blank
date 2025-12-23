#include <cmath>
#include <iostream>
using namespace std;
int main()
{
  int massive[3][3] = {
            {2, 3, 6},
            {3, 9, 1},
            {1, 2, 3}
        };

        int y[3];
        y[0] = massive[0][0];  
        y[1] = massive[1][1];  
        y[2] = massive[2][2];  

        cout << "Диагональ: ";
        for (int i = 0; i < 3; i++) {
            cout << y[i] << " ";
        }
        cout << endl;

        int max = y[0];
        if (y[1] > max) {
            max = y[1]; }
        if (y[2] > max) { 
            max = y[2]; }
        cout << "Максимум: " << max << endl;

        double result[3];
        result[0] = (double)y[0] / max;
        result[1] = (double)y[1] / max;
        result[2] = (double)y[2] / max;

        cout << "Результат: ";
        for (int i = 0; i < 3; i++) {
            cout << result[i] << " ";
        }
    }

