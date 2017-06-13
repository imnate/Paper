#include <iostream>

using namespace std;

bool LeapYear(int);

int main()
{
	int year = 0;
	cout << "Checking whether a year is leap year or not.\nPlease input a year: ";
	cin >> year;

	if (LeapYear(year))
		cout << year << " is a leap year.\n";
	else 
		cout << year << " is not a leap year.\n";

	system ("pause");
	return 0;
}

bool LeapYear(int year)
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return true;
	else
		return false;
}



