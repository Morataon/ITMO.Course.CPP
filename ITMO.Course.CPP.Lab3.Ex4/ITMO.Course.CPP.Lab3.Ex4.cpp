#include <iostream>
#include <windows.h>
using namespace std;
int addNumders(int n) //Задание 1
{
	if (n == 1) return 1; // выход из рекурсии
	else return (n + addNumders(n - 1));
}
int gcd(int m, int n) //Задание 2
{
	if (n == 0) return m;
	return gcd(n, m % n);
}
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int a, b, num;
	cout << "Введите число для расчета суммы:\n";
	cin >> num;
	cout << "сумма = " << addNumders(num) << endl;
	cout << "Давайте вычислим наибольший общий делитель (НОД):\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "НОД = " << gcd(a, b) << endl;
	return 0;
}