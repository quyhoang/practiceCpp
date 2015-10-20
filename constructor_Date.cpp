// 20 Oct
// Practice using constructor
// Esaki Leo, VNUUET

#include<iostream>
#include<cstdlib>

using namespace std;

class dayOfYear
{
public:
	dayOfYear(int mon, int da);
	dayOfYear(int mon);
	dayOfYear();

	void input();
	void output();
private:
	void testDate();
	int day;
	int month;
};

int main(int argc, char* argv[])
{
	dayOfYear day1(10,15), day2(3), day3;
	cout << "Display first day" << endl;
	day1.output();
	cout << "Manually reset the first day" << endl;
	day1.input();
	cout << endl << "The first day after reset" << endl;
	day1.output();
	cout << "Display the second day" << endl;
	day2.output();
	cout << "Automatically reset the second day..." << endl;
	day2 = dayOfYear(12,10);
	cout << "Second day after reset" << endl;
	day2.output();
	return 12;
}

dayOfYear::dayOfYear(int mon, int da): month(mon), day(da)
{
	testDate();
}

dayOfYear::dayOfYear(int mon): month(mon), day(10)
{
	testDate();
}

dayOfYear::dayOfYear(): month(1), day(1)
{}

void dayOfYear::testDate()
{
	if (day < 0 || day > 31)
	{
		cout << "Invalid initialization!";
		exit(1);
	}

	if (month < 0 || month > 12)
	{
		cout << "Invalid initialization!";
		exit(2);
	}
}

void dayOfYear::input()
{
	cout << endl << "Please insert month as a number:" << endl;
	cin >> month;
	cout << "Please insert day:" << endl;
	cin >> day;
	cout << endl;
	testDate();
}

void dayOfYear::output()
{
	cout << endl << "The date is: ";
	switch(month)
	{
		case 1: cout << "Jan"; break;
		case 2: cout << "Feb"; break;
		case 3: cout << "Mar"; break;
		case 4: cout << "Apr"; break;
		case 5: cout << "May"; break;
		case 6: cout << "Jun"; break;
		case 7: cout << "Jul"; break;
		case 8: cout << "Aug"; break;
		case 9: cout << "Sep"; break;
		case 10: cout << "Oct"; break;
		case 11: cout << "Nov"; break;
		case 12: cout << "Dec"; break;
		defaul: cout << "Invalid date!"; break;
	}
	
	cout << " " << day << endl;
}



