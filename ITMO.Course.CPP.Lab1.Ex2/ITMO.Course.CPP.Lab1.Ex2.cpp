#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double a, b;
	string name;
	cout << "Введите a и b:\n";
	cin >> a;
	cin >> name;
	cin >> b;
	double x = a / b;
	cout.precision(3);
	cout << "\nx=" << x << endl;
	cout << sizeof(a / b) << ends << sizeof(x) << endl;
	cout << "Привет, " << name << "!" << endl;
	return 0;
}
