#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    double y;
    int couter = 0;

    cout << "for" << endl;

    for (double x = -4; x <= 4; x += 0.5) {
        if (x <= 0) {
            y = pow(x, 2) - 1;
            cout << y << " ";
        }
        else if (0 <= x && x <= 1.5) {
            y = cos(x);
            cout << y << " ";
        }
        else {
            if (x > 1.5);
            y = sin(x - 1);
            cout << y << " ";

        }

        if (y > 0) {
            couter++;
        }
    }
      cout << endl << couter;




    double x = -4;
    while (x <= 4) {
        if (x <= 0) {
            y = pow(x, 2) - 1;
                cout << y << " ";
        }
        else if (0 < x && x <= 1.5) {
            y = cos(x);
            cout << y << " ";
        }
        else if (x > 1.5) {
            y = sin(x - 1);
                cout << y << " ";
        }

        x += 0.5;
    }





    x = -4;
        do {
            if (x <= 0) {
                y = pow(x, 2) - 1;
                    cout << y << " ";
            }
            else if (0 < x && x <= 1.5) {
                y = cos(x);
                    cout << y << " ";
            }
            else if (x > 1.5) {
                y = sin(x - 1);
                    cout << y << " ";
            }
            x += 0.5;
        } while (x <= 4);

}