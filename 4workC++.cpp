#include <iostream>
#include <cmath>
using namespace std;
double raschet(double a, double b, double c)
{
    return (a + b + c) / 2;
}


double tema(double a, double b, double c)
{
    double p = raschet(a, b, c);
    return sqrt(((p - a) * (p - b)) / (p * (p - c)));
}


int main()
{
    setlocale(LC_ALL,"Russian");
    double a, b, c;
    cout << "Введите a" << endl;
    cin >> a;
    cout << "Введите b" << endl;
    cin >> b;
    cout << "Введите c" << endl;
    cin >> c;
    double result = tema(a, b, c);
    cout << result << endl;
}