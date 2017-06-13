#include<iostream>
using namespace std ;

void main()
{
	int x = 0 ;

	cout << "Checking whether a year is leap year or not. Please input a year: " ;
	cin >> x ;

	if(x % 400 == 0)
	cout << x << " is a leap year." ;

	else if(x % 100 == 0)
	cout << x << " is not a leap year." ;

	else if(x % 4 == 0)
	cout << x << " is a leap year." ;

	else
	cout << x << " is not a leap year." ;

	system("pause") ;








}