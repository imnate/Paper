#include <iostream>
using namespace std;

int main()
{
int number=0;

cout<<"Enter a integer:\n";

cin>>number;

for(int i=number;i>=0;i--)
{
	cout<<"\n";
	
	for(int j=i;j>0;j--)
	{

	cout<<"*";

	}

}
cout<<"\n";

system("pause");

}