#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter a year: ";
	cin>>year;
	if(year%4==0)
	{
		if(year%100!=0)
			cout<<"leap";
		else
		{
			if(year%400==0)
				cout<<"leap";
			else
				cout<<"common";
		}
	
	}
	else
		cout<<"common";

	system("pause");
	return 0;
}