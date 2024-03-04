#include <string>
#include "student.h"
#include <fstream>

// Деструктор Student
Students::~Students()
{
	Students::save();
}

// Запись данных о студенте в файл
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

// Конструктор класса Student
Students::Students(string name, string last_name)
{
	Students::set_name(name);
	Students::set_last_name(last_name);
}

// Установка имени студента
void Students::set_name(std::string student_name)
{
	Students::name = student_name;
}

// Получение имени студента
std::string Students::get_name()
{
	return Students::name;
}

// Установка фамилии студента
void Students::set_last_name(std::string student_last_name)
{
	Students::last_name = student_last_name;
}

// Получение фамилии студента
std::string Students::get_last_name()
{
	return Students::last_name;
}

// Установка промежуточных оценок

void Students::set_scores(int scores[])
{
	for (int i = 0; i < 5; ++i) {
		Students::scores[i] = scores[i];
	}
}
// Установка среднего балла

void Students::set_average_score(double ball)
{
	Students::average_score = ball;
}

// Получение среднего балла
double Students::get_average_score()
{

	return Students::average_score;
}