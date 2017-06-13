#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter a integer:"<<endl;
	int number;
	cin>>number;

	for( int i=number ; i>=1; i--)
	{
		for( int j=1 ; j<=i ; j++)
			cout<<'*';
		cout<<endl;
	}
	system("pause");
	return 0;
}