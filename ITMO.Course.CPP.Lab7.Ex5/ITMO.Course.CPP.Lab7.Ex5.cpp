#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>
#include <vector>
using namespace std;
using Tuple = tuple<string, int, double>;
using Tuple1 = tuple<int, double>;
Tuple funtup(string s, int a, double d)
{
	s.append("!");
	return make_tuple(s, a, d * 10);
}
Tuple funtup1(Tuple t)
{
	return make_tuple(get<0>(t).append("**"), get<1>(t) + 3, get<2>(t) * 3);
}
void printTupleOfThree(Tuple t)
{
	cout << "("
		<< get<0>(t) << ", "
		<< get<1>(t) << ", "
		<< get<2>(t) << ")" << endl;
}
void printTupleOfTwo(Tuple t)
{
	cout << "("
		<< get<0>(t) << ", "
		<< get<1>(t) << ")" << endl;
}
Tuple1 funtup2(Tuple t)
{

	return make_tuple(get<1>(funtup1(t)), get<2>(funtup1(t)));
}
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	vector<string> v1{ "one", "two", "three", "four", "five", "six" };
	vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
	vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
	auto t0 = make_tuple(v1[0], v2[0], v3[0]);
	printTupleOfThree(t0);
	auto t1 = funtup(v1[1], v2[1], v3[1]);
	printTupleOfThree(t1);
	auto t2 = funtup1(t1);
	printTupleOfThree(t2);
	auto t3 = funtup1(t2);
	printTupleOfTwo(t3);

	return 0;
}