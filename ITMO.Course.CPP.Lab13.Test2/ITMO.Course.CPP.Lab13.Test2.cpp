#include <iostream>
#include <string>
#include <sstream> 
#include <vector>
#include <iomanip>
#include <windows.h>


using namespace std;

	class human
	{
	public:
		human(std::string last_name, std::string name, std::string second_name)
		{
			this->last_name = last_name;
			this->name = name;
			this->second_name = second_name;
		}
		std::string get_full_name()
		{
			std::ostringstream full_name;
			full_name << this->last_name << " "
				<< this->name << " "
				<< this->second_name;
			return full_name.str();
		}

		virtual std::string printData()
		{
			return " ";
		}

	protected:
		std::string name;
		std::string last_name;
		std::string second_name;
	};


	class student : public human
	{
	public:
		student(std::string last_name, std::string name, std::string second_name, std::vector<int> scores) : human(last_name, name, second_name)
		{
			this->scores = scores;
		}

		float get_average_score()
		{
			unsigned int count_scores = this->scores.size();
			unsigned int sum_scores = 0;
			float average_score;
			for (unsigned int i = 0; i < count_scores; ++i)
			{
				sum_scores += this->scores[i];
			}
			average_score = (float)sum_scores / (float)count_scores;
			return average_score;
		}

		virtual std::string printData() {
			std::ostringstream average;
			average << std::fixed << get_average_score();
			return last_name + " " + name + " " + second_name + " имеет средний балл = " + average.str();
		}

	private:
		std::vector<int> scores;
	};

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
			return "Преподаватель, " + last_name + " " + name + " " + second_name + ", работает " + workTime.str() + " часов";
		}

	private:
		unsigned int work_time;
	};

	void  initVect(vector<human*>&);

	int main()
	{
		SetConsoleOutputCP(1251);
		SetConsoleCP(1251);
		vector<human*> humans;
		initVect(humans);

		for (human* human : humans) {
			cout << human->printData() << endl;
		}

		return 0;
	}

	void initVect(vector<human*>&human) {
		human.push_back(new teacher("Новиков", "Кирилл", "Богданович", 36));
		human.push_back(new student("Горяинова", "Анастасия", "Тимофеевна", { 4,3,5,4,3 }));
	}


