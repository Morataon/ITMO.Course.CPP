#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
bool main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int k, m, n;
	int sum = 0;
	string SNILS_str;
	constexpr int SNILS_len = 11;
	bool valid = false;
	cout << "Введите номер СНИЛС:\n" << endl;
	cin >> SNILS_str;
	if (SNILS_str.length() == SNILS_len) {
		constexpr int conv = (int)'0';
		int contr = ((int)SNILS_str[SNILS_len - 2] - conv) * 10 + ((int)SNILS_str[SNILS_len - 1] - conv);
		for (int i = 2; i <= SNILS_len - 3; i++) {
			k = i - 1;
			m = i - 2;
			if ((SNILS_str[i] == SNILS_str[k]) && (SNILS_str[i] == SNILS_str[m])) {
				break;
			}
			if (i == (SNILS_len - 3)) {
				for (int j = 0; j <= SNILS_len - 3; j++) {
					n = SNILS_len - 2 - j;
					sum += ((int)SNILS_str[j] - conv) * n;
				}
				if (((sum < 100) && (sum == contr)) || (((sum == 100) || (sum == 101)) && (contr == 0)) || ((sum > 101) && ((sum % 101 < 100) && (sum % 101 == contr) || (sum % 101 == 100) && (contr == 0)))) {
					valid = true;
				}
			}
		}
	}
	cout << " Номер СНИЛС валидный " << valid << endl;
	return valid;
}