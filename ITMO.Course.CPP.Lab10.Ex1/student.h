#pragma once
#include <string>
#include "IdCard.h"
#include "windows.h"

using namespace std;

class Students
{
public:
	Students();

	void save();

	~Students();

	Students(string, string);

	Students(string, string, IdCard*);

	// Установка имени студента
	void set_name(string);

	// Получение имени студента
	string get_name();

	// Установка фамилии студента
	void set_last_name(string);

	// Получение фамилии студента
	string get_last_name();

	// Установка промежуточных оценок
	void set_scores(int[]);

	// Установка среднего балла
	void set_average_score(double);

	// Получение среднего балла
	double get_average_score();

	IdCard* iCard;
	void setIdCard(IdCard* c);
	IdCard getIdCard();

private:
	// Промежуточные оценки
	int scores[5];
	// Средний балл
	double average_score;
	// Имя
	string name;
	// Фамилия
	string last_name;
};