#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	int year;
	cout << "Checking whether a year is leap year or not. Please input a year: ";
	cin >> year;
	if (  year % 400 == 0)
		cout << year << " is a leap year." << endl;
	else if ( year % 100 == 0 )
		cout << year << " is not a leap year." << endl;
	else if ( year % 4 == 0 )
		cout << year << " is a leap year." << endl;
	else  
		cout << year << " is not a leap year." << endl;
	system("pause");
	return 0 ;
}