# include <iostream>

using namespace std;

int main()
{
	int year;
	
	cout << "Checking whether a year is leap year or not." << endl;

	do{
		cout << "Please input a year (0 to exit)¡G";
		cin >> year;

		if ( ( year % 4 == 0 ) && ( year % 100 != 0 ) || (year % 400 == 0))
			cout << year << " is a leap year¡I" << endl;
		else cout << year << " is not a leap year¡I" << endl;

	}while( year != 0 );

	system("pause");
	return 0;
}