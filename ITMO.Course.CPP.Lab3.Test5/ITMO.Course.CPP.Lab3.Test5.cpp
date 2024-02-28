#include <iostream>
#include <windows.h>

using namespace std;

void decToBin(int n)
{
	if (n / 2 != 0)
		decToBin(n / 2);
	cout << n % 2;

}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n;
	cout << "Давайте переведем число из десятичного в двоичное. Введите число:" << endl;
	cin >> n;
	if (n >= 0) {
		cout << "Результат перевода: " << endl;
		decToBin(n);
	}
	else {
		cout << "Вы ввели некорректное число." << endl;
	}
	return 0;
}