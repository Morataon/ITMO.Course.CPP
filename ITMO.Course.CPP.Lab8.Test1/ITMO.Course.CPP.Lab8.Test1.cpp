#include <iostream>
class Time
{
public:
	Time() {
		hours = minutes = seconds = 0;
	};
	Time(int h, int m, int s) {
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
	}
private:
	int hours;
	int minutes;
	int seconds;
};

int main()
{
	const Time t1(11, 65, 105);
	const Time t2(10, 82, 93);
	Time t3;
	t3.TimeAdd(t1, t2);
	t1.ShowTime();
	t2.ShowTime();
	t3.ShowTime();
	return 0;
}