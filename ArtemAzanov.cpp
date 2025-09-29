#include <iostream>
#include <cmath>
using namespace std;
#include <algorithm>
int main()
{
    setlocale(LC_ALL, "Russian");
    double x;
    cout << "введите x: ";
    cin >> x;
    double y;
    cout << "введите y: ";
    cin >> y;
    double a;
    cout << "введите a: ";
    cin >> a;
    double b;
    cout << "введите b: ";
    cin >> b;
    double z;
    double maxEl;
    double minEl;
    if (x > 0 && y > 0) {
        double comp1 = a / x;
        double comp2 = b / x;
        double comp3 = sqrt(y);
        z = max({ comp1, comp2, comp3 });
    }
    else if (x < 0 && y > 0) {
        double word1 = a * pow(x, 3);
        double word2 = b * pow(y, 2);
        z = min(word1, word2);
    }
    else {
        z = (pow(2, x + y));
    }
    cout << "z = " << z << endl;

    return 0;
}