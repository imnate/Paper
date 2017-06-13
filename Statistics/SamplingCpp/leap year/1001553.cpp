#include<iostream>

using namespace std;

int main()
{

	int inputYear;
	cout << "Please input the year for detection that is a leap year. " << endl;
	cin >> inputYear;

	if( inputYear % 100 != 0 && inputYear % 4 == 0 || inputYear % 400 == 0 )
	  cout << "This year is a leap year." << endl;
	else
	  cout << "This year is not a leap year !!" << endl;

	system("pause");
    return 0;
}