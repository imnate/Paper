#include<iostream>

using namespace std;

int main()
{
	int number;

	cout<<"Enter a integer : "<<endl;
	cin>>number;

	for(int i = number ; i >= 1 ; i--)
	{
		for(int x = 1 ; x <= i ; x++)
		{
			cout<<"*";
		}

		cout<<endl;
	}

	system("pause");
	return 0;
}