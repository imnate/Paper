//tell leap year
#include <iostream>
using namespace std;

int main()
{
	int year = 0;
	while (year != -1){
		cout << "Checking whether a year is leap year or not. Please input a year: ";
		cin >> year;
		if (year % 4 == 0)
			if (year % 100 == 0)
				if (year % 400 == 0)
					cout << year << " is a leap year." << endl;
				else
					cout << year << " is not a leap year." << endl;
			else
				cout << year << " is a leap year." << endl;
		else
			cout << year << " is not a leap year." << endl;
		}
	system("pause");
	return 0;
}