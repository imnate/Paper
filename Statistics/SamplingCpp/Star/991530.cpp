//991530 HW1
//Asterisk triangle

#include <iostream>
using namespace std;

int main()
{
	cout<<"Enter a integer: ";
	int n;
	cin>>n;
	cout<<endl;
	
	for(int j=n ; j>=0 ; j--)
	{
		for(int i=j ; i>=1 ; i--)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	system ("PAUSE");
	return 0;
}
