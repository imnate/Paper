#include<iostream>
using namespace std;
int main()
{
	int number;
	cin>>number;
	int i,j;
	for(j=0;j<number;j++)
	{
		for(i=j;i<number;i++)
			cout<<"*";
		cout<<endl;
	}
	system("pause");
	return 0;
}
