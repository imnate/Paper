#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter a integer : ";
	cin >>a;
	cout<<"\n";

	for(int i=0;i<a;i++)
	{
		for(int j=a-i;j>0;j--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	system("pause");
	return 0;
}