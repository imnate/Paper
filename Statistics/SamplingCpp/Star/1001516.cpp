#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter an integer:\n";
	cin>>number;
	for(int i=0 ; i<number ; i++)
	{
		for(int j=number ; j>i ; j--)
			cout<<"*";
		cout<<endl;
	}
    system("pause");
	return 0;
}