#include<iostream>
using namespace std;

int main()
{
	int a=0;
	int b=0;
	int c=0;
	int x=1;
	int y=1;

	cout<<"�п�J������:"<<endl;
	cin>>a;
	
	for(x=1;x<=a;x++)
	{
		y=x*y;
	}
	cout<<"����:"<<endl<<y<<endl;

	return 0;
}