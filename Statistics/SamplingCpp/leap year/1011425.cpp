#include<iostream>

using namespace std;

int main()
{
	int year;

	cout << "Checking whether a year is leap year or not. Please input a year:";
	cin >> year;

	if(year % 4 != 0)
		cout << year << " is not a leap year.";
	if(year % 100 == 0 && year % 400 == 0)
		cout << year << " is a leap year.";
	if(year % 100 == 0 && year % 400 != 0)
		cout << year << " is not a leap year.";
	if(year % 4 == 0 && year % 100 != 0)
		cout << year << " is a leap year.";


	system("pause");

}

