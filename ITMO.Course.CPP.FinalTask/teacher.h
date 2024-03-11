#pragma once
#include "human.h"
#include <string>
#include <iostream>
class teacher : public human {
public:
	teacher() { iCard = setIdCard(); }
	teacher(string last_name, string name, unsigned int work_time) : human(last_name, name) {
		this->work_time = work_time;
	}
	IdCard* setIdCard() override
	{
		return new IdCard("teacher-access");
	}
	~teacher() {
		std::cout << "Teacher was deleted." << endl;
	}
	unsigned int get_work_time()
	{
		return this->work_time;
	}
	void setInfo() override {
		human::setInfo();
		cout << "Work time: ";
		cin >> work_time;
	}
	string getInfo() override {
		ostringstream info;
		info << human::getInfo() << " and work_time is " << get_work_time() << endl;
		return info.str();
	}
private:
	unsigned int work_time;
};