#pragma once
#include <fstream>
#include "human.h"
static class humanInterf {
public:
	human* h;
	humanInterf(human* hum) {
		h = hum;
	}
	void setInfo() {
		h->setInfo();
	}
	string getInfo() {
		return h->getInfo();
	}

	void printInfo() {
		std::cout << h->getInfo();
	}
	void save()
	{
		ofstream fout("humans.txt", ios::app);
		fout << h->getInfo();
		fout << endl;
		fout.close();
	}

};
