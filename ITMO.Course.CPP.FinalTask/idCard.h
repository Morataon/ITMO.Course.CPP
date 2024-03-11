#pragma once
#include <string>
#include <sstream>
using namespace std;
static int counter;
class IdCard
{
private:
	int number;
	string category;
public:
	IdCard(string cat) : number(counter++)
	{
		category = cat;
	}
	void setNumber(int num)
	{
		number = num;
	}
	int getNumber()
	{
		return number;
	}
	void setCategory(string cat)
	{
		category = cat;
	}
	string getCategory()
	{
		return category;
	}
};