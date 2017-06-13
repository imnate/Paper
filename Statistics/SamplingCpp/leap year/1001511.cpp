#include <iostream>
using namespace std;

int main()
{
    int year;

	cout << "Enter a year: ";
	cin >> year;

	if(year%4==0)
		if(year%100!=0)
		cout << "Year " << year << " is a leap year.\n";
	if(year%400==0)
		cout << "Year " << year << " is a leap year.\n";
	if(year%100==0)
		if(year%400!=0)
		cout << "Year " << year << " is a common year.\n";
	if(year%4!=0)
		cout << "Year " << year << " is a common year.\n";
	
	system("pause");
    return 0;
}