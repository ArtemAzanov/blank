#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double x;
	cout << "введите x: ";
	cin >> x;
	double y;
	cout << "введите y: ";
	cin >> y;
    double a = (14 * sin(x) + pow(y, 2)) / (0.92 * pow(cos(x), 3));
	cout << a << endl;
	return 0;
}

