#include "human.h"
#include <string>

class teacher : public human
{
public:
	teacher(std::string last_name, std::string name, std::string second_name,
		unsigned int work_time) : human(last_name, name, second_name)
	{
		this->work_time = work_time;
	}

	unsigned int get_work_time()
	{
		return this->work_time;
	}

	virtual std::string printData() {
		std::ostringstream workTime;
		workTime << std::fixed << get_work_time();
		return "Teacher, " + last_name + " " + name + " " + second_name +
			", has worked " + workTime.str() + " hours!";
	}

private:
	unsigned int work_time;
};