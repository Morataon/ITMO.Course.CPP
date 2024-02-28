#include <iostream>
#include <windows.h>
//#include <cmath>
using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	//SetConsoleCP(1251);
	double x, y;
	cout << "Введите координаты X и Y  точки для проверки\n";
	cin >> x;
	cin >> y;
	if (x * x + y * y < 9 && y>0)
		cout << "Точка внутри фигуры" << endl;
	else if (x * x + y * y > 9 || y > 0)
		cout << "Точка снаружи фигуры" << endl;
	else
		cout << "Точка на границе фигуры" << endl;
	return 0;
}
