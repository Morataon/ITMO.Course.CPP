#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "idCard.h"
using namespace std;

class human {
public:
	human() { }
	human(string last_name, string name)
	{
		this->last_name = last_name;
		this->name = name;
		iCard = setIdCard();
	}
	virtual ~human() {
		delete iCard;
	};
	string get_full_name()
	{
		ostringstream full_name;
		full_name << this->last_name << " " << this->name;
		return full_name.str();
	}
	virtual IdCard* setIdCard() = 0;
	virtual void setInfo() {
		cout << "Name: ";
		cin >> name;
		cout << "Last name: ";
		cin >> last_name;
	}
	virtual string getInfo() {
		ostringstream info;
		info << "\n" << get_full_name() << " has " << "card N" << getIdCard().getNumber() << " with access level:" << getIdCard().getCategory();
		return info.str();
	}
	void printInfo() {
		std::cout << getInfo();
	}
	IdCard* iCard;
	IdCard getIdCard() {
		return *iCard;
	}
private:
	std::string name;
	std::string last_name;
};