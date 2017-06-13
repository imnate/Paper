#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Checking whether a year is leap year or not. Please input a year: ";
	cin>>n;

	if(n%4==0)
	{
		if(n%400==0)
			cout<<n<<" is a leap year.";
		else if(n%100==0)
			cout<<n<<" is not a leap year.";
	}
	else
		cout<<n<<" is not a leap year.";
		
	system ("pause");
	return 0;
}