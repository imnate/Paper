#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a integer:"<<endl;
	cin>>n;
	cout<<endl;
	for(int i=n;i>=1;i--)
	{
		for(int j=i;j>=1;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	system("PAUSE");
	return 0;
}