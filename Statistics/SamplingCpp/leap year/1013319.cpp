#include<iostream>
using namespace std;

int main()
{
	int yr;

	cout<<"Checking whether a year is leap year or not. Please input a year: ";
	cin>>yr;
	cout<<endl;

	if(yr%400==0)
		cout<<yr<<" is a leap year. "<<endl;
		
	else if(yr%100==0) 
		cout<<yr<<" is a not leap year. "<<endl;
		
	else if(yr%4==0)
		cout<<yr<<" is a leap year. "<<endl;

	else
		cout<<yr<<" is not a leap year. "<<endl;

system("pause");
return 0;
}