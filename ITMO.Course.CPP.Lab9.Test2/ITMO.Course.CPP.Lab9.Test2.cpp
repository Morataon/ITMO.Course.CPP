#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Time
{
public:
	Time() {
		hours = minutes = seconds = 0;
	};

	class ExTime
	{
	public:
		string fun, param;
		int erValue;
		ExTime(string f, string par, int sc)
		{
			fun = f;
			param = par;
			erValue = sc;
		}
	};

	Time(int h, int m, int s) {
		string f = "Конструктор класса Time с параметрами.";
		if ((h < 0) || (h > 23)) throw ExTime(f, "hours", h);
		if ((m < 0)) throw ExTime(f, "minutes", m);
		if ((s < 0)) throw ExTime(f, "seconds", s);
		hours = h;
		minutes = m;
		seconds = s;
		hours = h;
		minutes = m;
		seconds = s;
		if (seconds >= 60) {
			minutes += seconds / 60;
			seconds -= 60 * (seconds / 60);
		}
		if (minutes >= 60)
		{
			hours += minutes / 60;
			minutes -= 60 * (minutes / 60);
		}
		if ((hours > 23)) throw ExTime(f, "hours", hours);
	}
	void ShowTime() const
	{
		std::cout << "Time is " << hours << ":" << minutes << ":" << seconds << std::endl;
	}
	void TimeAdd(const Time& t1, const Time& t2)
	{
		seconds = t1.seconds + t2.seconds;
		if (seconds >= 60)
		{
			seconds -= 60;
			minutes++;
		}
		minutes = t1.minutes + t2.minutes;
		if (minutes >= 60)
		{
			minutes -= 60;
			hours++;
		}
		hours = t1.hours + t2.hours;
	}
	void TimeSubt(const Time& t1, const Time& t2) {
		string f = "Функция вычитания объектов класса Time.";
		seconds = t1.seconds - t2.seconds;
		if (seconds < 0)
		{
			seconds += 60;
			minutes--;
		}
		minutes = t1.minutes - t2.minutes;
		if (minutes < 0)
		{
			minutes += 60;
			hours--;
		}
		hours = t1.hours - t2.hours;
		if (hours < 0) throw ExTime(f, "hours", hours);
	}
private:
	int hours;
	int minutes;
	int seconds;
};
Time InputTime()
{
	string f = "Функция ввода параметров объекта Time";
	int h, m, s;
	cout << "\nВведите число часов: ";
	cin >> h;
	if (cin.fail()) {

		cin.clear();
		throw Time::ExTime(f, "hours", 0);
	}
	cout << "Введите число минут: ";
	cin >> m;
	if (cin.fail()) {

		cin.clear();
		throw Time::ExTime(f, "minutes", 0);
	}
	cout << "Введите число секунд: ";
	if (cin.fail()) {

		cin.clear();
		throw Time::ExTime(f, "seconds", 0);
	}
	cin >> s;
	return Time(h, m, s);
}
int main()
{
	SetConsoleOutputCP(1251);
	try {
		Time t1, t2, t3;
		t1 = InputTime();
		t2 = InputTime();
		t3.TimeSubt(t1, t2);
		t1.ShowTime();
		t2.ShowTime();
		t3.ShowTime();
	}

	catch (Time::ExTime& e) {
		cout << "\nОшибка: " << e.fun;
		if (e.erValue != 0) cout << "\nЗначение параметра " << e.param << " равное " << e.erValue << " является недопустимым\n";
		else cout << "\nЗначение параметра " << e.param << " является недопустимым\n";
	}
	return 0;
}