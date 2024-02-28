#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int iter, counter;
	float value, delta, step;
	float min_value_coin = 0.01;
	cout << "Ведите значение для размена монет:" << endl;
	cin >> value;
	counter = 0;
	iter = 1;
	do {
		switch (iter) {
		case 1:
			step = 10;
			break;
		case 2:
			step = 5;
			break;
		case 3:
			step = 2;
			break;
		case 4:
			step = 1;
			break;
		case 5:
			step = 0.5;
			break;
		case 6:
			step = 0.1;
			break;
		case 7:
			step = 0.05;
			break;
		case 8:
			step = min_value_coin;
			break;

		}

		counter = value / step;
		value = value - counter * step;
		if (counter > 0) {
			cout << counter << " монет номиналом " << step << "руб." << endl;
		}
		iter++;
	} while (value > min_value_coin);
	return 0;
}