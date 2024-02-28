#include <iostream>
#include <windows.h>

using namespace std;

long double root_pow(double a)
{
	return pow(a, 1.0 / 3);
}
long double root_it(double a)
{
	double x_c = 0;
	double x_p = a;
	int i = 1;
	while (abs(x_p - x_c) > 1e-10) {
		if (i != 1) {
			x_p = x_c;
		}
		x_c = (2 * x_p + (a / (x_p * x_p))) / 3;
		i++;
	}
	return x_c;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double number;
	cout << "Введите число для вычисления кубического корня " << endl;
	cin >> number;
	cout << "Вариант 1: результат вычисления корня: " << root_pow(number) << endl;
	cout << "Вариант 2: результат вычисления корня: " << root_it(number) << endl;
	return 0;
}