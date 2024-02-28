#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
string privet(string name)
{
	string str = name + ", " + "hello!\n";
	return str;
}
int main()
{
	SetConsoleOutputCP(1251);
	string name;
	cout << "What is your name?" << endl;
	cin >> name;
	string nameOut = privet(name);
	cout << nameOut << endl;
	return 0;
}