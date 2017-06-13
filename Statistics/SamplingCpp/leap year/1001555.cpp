#include<iostream>

using namespace std;

int main(){

	int number = 0;

	cout << "Checking whether a year is leap year or not. Please input a year:";
	cin >> number ;

	if
		(number%400==0)
		cout << number << " is a leap year." << endl;
	else if (number%4==0)
		cout << number << " is a leap year." << endl;
	else
		cout << number << " is not a leap year." << endl;


	system("pause");
	return 0;
}