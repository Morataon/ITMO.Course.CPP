#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
string privet(string name)
{
	string str = name + ", " + "hello!\n";
	return str;
}
void privet(string name, int k)
{
	cout << name << ", " << "hello! " << "you input " << k << endl;
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int k;
	string name;
	cout << "What is your name?" << endl;
	cin >> name;
	cout << "Input number:" << endl;
	cin >> k;
	string nameOut = privet(name);
	cout << nameOut << endl;
	privet(name, k);
	return 0;
}
