#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;


int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;

    // Вводим координаты вершин пятиугольника с клавиатуры
    cout << "Введите координаты вершин пятиугольника (x, y):\n";
    cout << "Вершина 1: ";
    cin >> x1 >> y1;
    cout << "Вершина 2: ";
    cin >> x2 >> y2;
    cout << "Вершина 3: ";
    cin >> x3 >> y3;
    cout << "Вершина 4: ";
    cin >> x4 >> y4;
    cout << "Вершина 5: ";
    cin >> x5 >> y5;

    // Вычисляем площадь пятиугольника по формуле
    double area = 0.5 * abs((x1 * y2 + x2 * y3 + x3 * y4 + x4 * y5 + x5 * y1 - x2 * y1 - x3 * y2 - x4 * y3 - x5 * y4 - x1 * y5));

    // Выводим площадь пятиугольника
    cout << "Площадь пятиугольника: " << area << endl;

    return 0;
}
