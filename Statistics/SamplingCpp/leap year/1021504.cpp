#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Checking whether a year is leap year or not. Please input a year:";
	cin >> number;

	if(number % 4 == 0 && number % 100 != 0 || number % 400 == 0)
		cout << number << " is a leap year." <<endl;
	else
		cout << number << " is not a leap year." <<endl;

	system("pause");
	return 0;
}