#include <iostream>
#include <windows.h>

using namespace std;

int summ(int n)
{
	int s = 0;
	if (n == 1)
		return 5;
	else
		return 5 * n + summ(n - 1);

}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int n;
	cout << "Рассчитаем сумму строк, которая равна S=5+10+15+...+5*n. Введите параметр n (n>0) " << endl;
	cin >> n;
	if (n > 0) {
		cout << "Результат вычисления " << summ(n) << endl;
	}
	else {
		cout << "Вы ввели неверный параметр n." << endl;
	}

	return 0;
}