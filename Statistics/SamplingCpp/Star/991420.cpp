#include<iostream>
using namespace std;

int main()
{
	int integer;
	
	cout<<"Enter a integer: \n";
	cin>>integer;
	
	for(int i=integer;i>0;i--)
	{
		for(int j=1;j<=i;j++)
			
			cout<<"*";

		cout<<"\n";
	}

	system("PAUSE");

	return 0;
}