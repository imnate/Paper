//1003303 hw1  2014/03/13
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Checking whether a year is leap year or not. Please input a year: ";
	cin>>n;
	if((n%4)==0)
	{
		if((n%100)==0)
		{
			if((n%400)==0)
			{
				cout<<n<<" is a leap year"<<endl;
			}
			else
			{
				cout<<n<<" is not a leap year"<<endl;
			}
		}
		else
		{
			cout<<n<<" is a leap year"<<endl;
		}
	}
	else
	{
		cout<<n<<" is not a leap year"<<endl;
	}
	system("pause");
	return 0;
}