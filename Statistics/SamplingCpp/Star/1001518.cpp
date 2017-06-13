#include <iostream>
using namespace std;
int main ()
{
	int input;
	cout<<"Enter a integer: "<<endl;
	cin>>input;
	
	for(int a=input ; a>=1 ; a--)
	{
		for(int b=a ; b>=1 ; b--)
		{
			cout<<"*";
		}
	cout<<endl;
	}	
	system("pause");
	return 0;
}