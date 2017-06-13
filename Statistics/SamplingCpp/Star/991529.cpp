#include <iostream>
using namespace std;

int main()
{
	int number;
	cout<<"Enter a integer:\n";
	cin>>number;

	for(int i=0 ; i<number ; i++)
	{
		for(int j=0 ; j<number-i ; j++)
		{
			cout<<'*';
		}
		cout<<endl;
	}
	system("PAUSE");
	return 0;
}