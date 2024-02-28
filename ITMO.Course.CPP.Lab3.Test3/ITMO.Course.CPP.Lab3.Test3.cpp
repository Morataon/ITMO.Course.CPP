#include <iostream>
#include <windows.h>

using namespace std;

long double triangleSquare(double a)
{
	if (a < 0) {
		return -1;
	}
	else {
		return sqrt(3) * a * a / 4;
	}
}
long double triangleSquare(double a, double b)
{
	if ((a < 0) || (b < 0)) {
		return -1;
	}
	else {

		return sqrt(4 * a * a - b * b) * b / 4;
	}
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int triangleType;
	double a, b, square;
	cout << "Введите тип треугольника (1-равносторонний треугольник/2-равнобедренный треугольник) " << endl;
	cin >> triangleType;
	if (triangleType == 1) {
		cout << "Введите размер стороны треугольника" << endl;
		cin >> a;
		square = triangleSquare(a);
	}
	else if (triangleType == 2) {
		cout << "Введите размер одной из равных сторон треугольника" << endl;
		cin >> a;
		cout << "Введите размер третьей стороны треугольника" << endl;
		cin >> b;
		square = triangleSquare(a, b);
	}
	else {
		cout << "Вы ввели неверный тип треугольника" << endl;
		return 0;
	}
	if (square == -1) {
		cout << "Вы ввели неверные размеры сторон треугольника" << endl;
	}
	else {
		cout << "Площадь треугольника равна " << square << endl;
	}
	return 0;
}