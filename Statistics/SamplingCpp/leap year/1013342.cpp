#include<iostream>
using namespace std;
int main()   //main function
{
	cout << "Checking whether a year is leap year or not.\nPlease input a year: " ;  //question
	
	int a;  
	cin >> a;  //input

	if(a%4==0)  //check input is leap year or not
			{	
			if(a%100==0 && a%400!=0)
				cout << a << " is not a leap year." << endl;
			else
				cout << a << " is a leap year." << endl;
			}

	system("pause");
	return 0;
}