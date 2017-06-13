#include <iostream>

using namespace std;

int main()
{
	int year = 0;

	cout << "Checking whether a year is leap year or not. Please input a year: ";
	cin >> year;

	if( ( year % 4 == 0 && year % 100 != 0 ) || ( year % 400 == 0 ) )
		cout << year << " is a leap year.\n";
	else
		cout << year << " is not a leap year.\n";

	system("pause");
	return 0;
}