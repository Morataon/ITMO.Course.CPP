#include <iostream> 
#include <string> 
#include "idCard.h"
#include "human.h"
#include "humanInterf.h"
#include "humanFactory.h"
using namespace std;
int main()
{
	counter = 1;
	humanFactory hFactory;
	human* arr[100];
	int n = 0;
	char choice;
	do
	{
		std::cout << "\n Do you want to input info for student(1) or teacher(2)? Enter 1 or 2." << endl;
		cin >> choice;
		if (choice == '1') {
			arr[n] = hFactory.createStudent();
		}
		else if (choice == '2') {
			arr[n] = hFactory.createTeacher();
		}
		else {
			std::cout << "\n Your choice is uncorrect" << endl;
			return 1;
		}
		humanInterf(arr[n++]).setInfo();
		std::cout << "Continue((y / n) ? ";
		cin >> choice;
	} while (choice == 'y');
	for (int i = 0; i < n; i++) {
		humanInterf(arr[i]).printInfo();
		humanInterf(arr[i]).save();
		delete arr[i];
	}
	return 0;
}