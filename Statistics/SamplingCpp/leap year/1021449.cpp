#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int year;

	cout << "Checking whether a year is leap year or not. Please input a year: ";
	cin >> year;

	if ( year % 4 == 0 && year % 100 != 0 )
		cout << year << " is a leap year.";
	
	else if ( year % 400 == 0 )
		cout << year << " is a leap year.";

	else 
		cout << year << " is not a leap year.";
	
	system("pause");
}
