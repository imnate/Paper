#include <iostream>

using namespace std;

int main()
{
	int year;

	cout << "Checking whether a year is leap year or not. Please input a year: ";
	cin >> year;
	
	if(year%400==0 || year%4==0 && year%100!=0)
		cout << year << " is a leap year.";
	else
		cout << year << " is not a leap year.";

	system("PAUSE");
	return 0;
}