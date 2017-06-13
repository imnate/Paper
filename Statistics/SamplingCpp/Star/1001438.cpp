#include<iostream>
using namespace std;

int main()
{
	int a;
	cout<<"Enter a integer: "<<endl;
	cin>>a;
	for(int j=a;j>=1;j--)
	{
		for(int i=j;i>=1;i--)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
	system("pause");

}