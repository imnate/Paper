#include<iostream>
using namespace std;
int main()
{
	int a;
	int b=1;
	cout<<"�п�J������:"<<endl;
	cin>>a;

	for(a;a>0;a--)
	{
		b=a*b;
	}
	cout<<"����:\n"<<b<<endl;

	return 0;

}