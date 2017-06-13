#include<iostream>

using namespace std;

int main()
{
	int a;
	cout<<"Enter a integer:"<<endl;
	cin>>a;
	
	for(int i=a ; i>0 ; i--)
	{
		for(int j=1 ; j<=i ; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	system("pause");
	return 0;
}