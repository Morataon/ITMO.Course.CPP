#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "What is your name? ";
	// cin >> name; только первое слово из всех
	getline(cin, name); // вся строка
	cout << "Hello, " << name << "!\n";
}