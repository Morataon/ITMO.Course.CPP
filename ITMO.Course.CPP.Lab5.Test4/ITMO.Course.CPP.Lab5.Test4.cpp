#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc < 4)
	{
		cout << "Too few parameters\n";
		return 1;
	}
	else if (strncmp(argv[1], "-a", 2) != 0 && strncmp(argv[1], "-m", 2) != 0)
	{
		cout << "Wrong parameter's format\n";
		return 1;
	}
	int rez = 0;
	if (!strncmp(argv[1], "-a", 2))
	{
		for (int i = 2; i < argc; i++) {
			int arg = atoi(argv[i]);
			rez += arg;
		}
	}
	else if (!strncmp(argv[1], "-m", 2))
	{
		rez = atoi(argv[2]);
		for (int i = 3; i < argc; i++) {
			int arg = atoi(argv[i]);
			rez *= arg;
		}
	}
	cout << rez << endl;
	return 0;
}