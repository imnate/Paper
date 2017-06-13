#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter an Integer"<<endl;
	int a=0;
	cin>>a;
	for(int i=0;i<a;i++)
	{
		for(int j=a;j>i;j--)
			cout<<"*";
		cout<<endl;
	}

	system("pause");
}