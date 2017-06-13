#include<iostream>
using namespace std;

int main()
{
	int inputyear=0;
	cout<<"Checking whether a year is leap year or not. Please input a year: ";
	cin>>inputyear;
	if((inputyear%4==0 && inputyear%100!=0) || (inputyear%400==0))
		cout<<inputyear<<" is a leap year."<<endl;
	else
		cout<<inputyear<<" is not a leap year."<<endl;

	system("pause");
	return 0;
}