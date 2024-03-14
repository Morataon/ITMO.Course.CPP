#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
#include "Student.h"
#include <list>
#include <set>
#include <algorithm>

using namespace std;

class Group
{
private:
	string name;
	//list <Student> masSt;
	//list <Student>::iterator iter;

	multiset<Student*, compareStudent> masSt;
	multiset<Student*, compareStudent>::iterator iter;

public:
	Group(string name);
	Group();

	void setName(string newName);
	string getName();

	int getSize();
	//void addStudent(Student newStudent);
	//void delStudent(Student oldStudent);

	void addStudent(Student* newStudent);
	void delStudent(Student* oldStudent);

	// Student findStudent(string, string);
	Student* findStudent(string searchName, string searchLastName);
	void GroupSort();
	void GroupOut();
};