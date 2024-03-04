#include <string>
#include "student.h"
#include <fstream>
#include "windows.h"

using namespace std;

void Students::save()
{
	ofstream fout("students.txt", ios::app);
	fout << Students::get_name() << " "
		<< Students::get_last_name() << " ";
	for (int i = 0; i < 5; ++i) {
		fout << Students::scores[i] << " ";
	}
	fout << endl;
	fout.close();
}

// Деструктор Student
Students::~Students()
{
	Students::save();
}

Students::Students(string name, string last_name)
{
	Students::set_name(name);
	Students::set_last_name(last_name);
}

Students::Students(string name, string last_name, IdCard* id)
{
	Students::set_name(name);
	Students::set_last_name(last_name);
	Students::setIdCard(id);
}

void Students::setIdCard(IdCard* c)
{
	iCard = c;
}

IdCard Students::getIdCard()
{
	return *iCard;
}

void Students::set_name(string student_name)
{
	Students::name = student_name;
}

string Students::get_name()
{
	return Students::name;
}

void Students::set_last_name(string student_last_name)
{
	Students::last_name = student_last_name;
}

string Students::get_last_name()
{
	return Students::last_name;
}

void Students::set_scores(int student_scores[])
{
	for (int i = 0; i < 5; ++i) {
		Students::scores[i] = student_scores[i];
	}
}

void Students::set_average_score(double ball)
{
	Students::average_score = ball;
}

double Students::get_average_score()
{
	return Students::average_score;
}

