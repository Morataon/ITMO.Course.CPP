#pragma once
#include "human.h"
#include <string>
#include <vector>
class student : public human {
public:
	student() { iCard = setIdCard(); }

	student(string last_name, string name, float average_score) : human(last_name, name) {
		this->average_score = average_score;
	}
	IdCard* setIdCard() override {
		return new IdCard("student-access");
	}
	~student() override {
		std::cout << "Student was deleted." << endl;
	}
	float get_average_score()
	{
		return average_score;
	}
	void setInfo() override {
		human::setInfo();
		cout << "Average score: ";
		cin >> average_score;
	}
	string getInfo()override {
		ostringstream info;
		info << human::getInfo() << " and average_score " << get_average_score() << endl;
		return info.str();
	}
private:
	float average_score;
};