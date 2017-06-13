#include<iostream>
using namespace std;
int main ()
{
	int leapyear;
	cout<<"Checking whether a year is leap year or not. Please input a year: ";
	cin>>leapyear;

	if((leapyear%4==0 && leapyear%100 !=0) || leapyear%400==0)
	{
		cout<<leapyear<<"is a leap year.";
	}
	else 
	{
		cout<<leapyear<<"is not a leap year";
	}
		


	system("pause");
	return 0;
}