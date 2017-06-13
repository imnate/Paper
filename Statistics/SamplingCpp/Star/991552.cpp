#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i,j,v;
	cout<<"Enter a value"<<endl;
	cin>>v;
	
	for(i=v;i>=0;i--)
	{
		for(j=i;j>=0;j--)
		{
			cout<<"*";
		}
		 cout<<endl;
	}
system("pause");
}