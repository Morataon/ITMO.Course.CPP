#include <iostream>
#include <windows.h>
using namespace std;
struct Time
{
	int hours;
	int minutes;
	double seconds;
	void ShowTime()
	{
		cout << "Результирующее время = " << hours * 3600 + minutes * 60 + seconds << " секунд" << "\n";
	}
};
Time TimeAdd(const Time& t1, const Time& t2)
{
	Time t;
	t.hours = t1.hours + t2.hours;
	t.minutes = t1.minutes + t2.minutes;
	if (t.minutes >= 60)
	{
		t.hours += t.minutes / 60;
		t.minutes -= 60 * (t.minutes / 60);
	}
	t.seconds = t1.seconds + t2.seconds;
	if (t.seconds >= 60.0) {
		t.minutes += int(t.seconds / 60);
		t.seconds -= 60 * int(t.seconds / 60);
	}
	return t;
}
Time TimeSubt(const Time& t1, const Time& t2)
{
	Time t, t3;
	t3.hours = -t2.hours;
	t3.minutes = -t2.minutes;
	t3.seconds = -t2.seconds;
	t = TimeAdd(t1, t3);
	return t;
}
Time InputTime()
{
	Time t;
	cout << "\nВведите число часов: ";
	cin >> t.hours;
	cout << "Введите число минут: ";
	cin >> t.minutes;
	cout << "Введите число секунд: ";
	cin >> t.seconds;
	return t;
}
int main() {
	SetConsoleOutputCP(1251);
	Time t1 = InputTime();
	Time t2 = InputTime();
	Time t3 = TimeAdd(t1, t2);
	Time t4 = TimeSubt(t1, t2);
	t1.ShowTime();
	t2.ShowTime();
	t3.ShowTime();
	t4.ShowTime();
	return 0;
}