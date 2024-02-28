#include <iostream>
#include <windows.h>
using namespace std;

long double firBinSearch(double a, int n)
{
	double L = 0;
	double R = a;
	while (R - L > 1e-10)
	{
		double M = (L + R) / 2;
		if (pow(M, n) < a)
		{
			L = M;
		}
		else
		{
			R = M;
		}
	}
	return R;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int power;
	double number;
	cout << "Введите число для вычисления корня" << endl;
	cin >> number;
	cout << "Введите значение корня" << endl;
	cin >> power;
	cout << "Результат вычисления корня " << firBinSearch(number, power) << endl;
	return 0;
}