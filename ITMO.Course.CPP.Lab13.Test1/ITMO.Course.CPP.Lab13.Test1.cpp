#include <iostream>
#include <string>
#include <sstream> 
#include <vector>
#include <iomanip>
#include <windows.h>
#include "human.h"
#include "student.h"
#include "teacher.h"

void  initVect(vector<human*>&);

void initVect(vector<human*>& human) {
	human.push_back(new teacher("Osipov", "Nikita", "Alekseevich", 50));
	human.push_back(new student("Ivanov", "Ivan", "Ivanovich", { 2,3,3,1,4,2 }));
	human.push_back(new student("Sbitnev", "Anton", "Vladimirovich", { 5,5,5,4,5,4 }));
}

int main()
{
	vector<human*> humans;
	initVect(humans);

	for (human* human : humans) {
		cout << human->printData() << endl;
	}

	return 0;
}

//
//
//
//	// Оценкистудента
//	std::vector<int> scores;
//
//	// Добавление оценок студента в вектор
//	scores.push_back(5);
//	scores.push_back(3);
//	scores.push_back(4);
//	scores.push_back(4);
//	scores.push_back(5);
//	scores.push_back(3);
//	scores.push_back(3);
//	scores.push_back(3);
//	scores.push_back(3);
//
//	student* stud = new student("Петров", "Иван", "Алексеевич", scores);
//	std::cout << stud->get_full_name() << std::endl;
//	std::cout << "Средний балл : " << stud->get_average_score() << std::endl;
//
//	unsigned int teacher_work_time = 40;
//	teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич", teacher_work_time);
//	std::cout << tch->get_full_name() << std::endl;
//	std::cout << "Количество часов: " << tch->get_work_time() <<
//		std::endl;
//	return 0;
//}
