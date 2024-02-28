#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleOutputCP(1251);
	//SetConsoleCP(1251);
	int s, k, m;
	s = 0;
	cout << "Для подсчета суммы числе от 1 до k и от m до 100 введите k и m:\n" << endl;
	cin >> k;
	cin >> m;
	for (int i = 1; i <= 100; i++)
	{
		if ((i > k) && (i < m)) continue;
		s += i;
	}
	cout << "summ = " << s << endl;
	return 0;
}