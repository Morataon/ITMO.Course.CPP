#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
//Практическое занятие 2. Контрольное задание 4. Вариант мишени 2.
int main() {
	SetConsoleOutputCP(1251);
	int iter, i, counter;
	float x, y, r;
	string shooter_type;
	i = 0;
	iter = 40;
	counter = 0;
	while (counter < iter) {
		i++;
		cout << "Введите координаты попадания: " << endl;
		cin >> x;
		cin >> y;
		r = x * x + y * y;
		if (r <= 1) {
			counter += 10;
		}
		else if (r <= 4) {
			counter += 5;
		}
		else if (r <= 9) {
			counter += 1;
		}
		cout << "Выстрел-" << i << " .Дистанция от центра = " << r << ". Сумма очков = " << "" << counter << endl;
	}
	if (i <= 5) {
		shooter_type = "снайпер";
	}
	else if (i <= 10) {
		shooter_type = "хороший стрелок";
	}
	else {
		shooter_type = "новичок";
	}
	cout << "Вы " << shooter_type << endl;
	return 0;
}