

#include<iostream>


using namespace std;

int main()
{
	int x;

	cout << "Checking whether a year is leap year or not. Please input a year: ";
	cin >> x;

	if( ( x % 4 == 0 ) && ( x % 100 != 0 ) )
		cout << x << " is  a leap year." << endl;

	else if  ( x % 400 == 0 )
		cout << x << " is  a leap year." << endl;

	else
		cout << x << "  is  not a leap year." << endl;
	
	
	system("pause");
	return 0;
}



