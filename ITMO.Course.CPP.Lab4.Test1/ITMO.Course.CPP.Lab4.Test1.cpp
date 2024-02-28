#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int Myroot(double, double, double, double&, double&);

int Myroot(double a, double b, double c, double& x1, double& x2) {
	double d;
	d = b * b - 4 * a * c;
	if (d > 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		return 1;
	}
	else if (d == 0) {
		x1 = -b / (2 * a);
		x2 = x1;
		return 0;
	}
	else return -1;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	double a, b, c, x1, x2;
	cout << "Введите коэффициенты квадратного уравнения a,b,c для уравнения вида a*x*x+b*x+c=0.\n";
	cout << "Введите a ";
	cin >> a;
	if (a == 0) {
		cout << "Ошибка: коэффициент 'a' не может быть равен нулю." << endl;
		return -1;
	}
	cout << "Введите b ";
	cin >> b;
	cout << "Введите c ";
	cin >> c;
	int result = Myroot(a, b, c, x1, x2);
	if (result >= 0) cout << "x1= " << x1 << ", x2= " << x2 << endl;
	else cout << "Введенные коэффициенты квадратного уравнения не имеют корней " << endl;
	return result;
}