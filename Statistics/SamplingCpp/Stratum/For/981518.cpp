#include<iostream>
using namespace std;
int main()
{
	int num;
	int a=1;

	cout<<"�п�J������:"<<endl;
	cin>>num;

	for(num;num>0;num--)
	{
		a=num*a;
	}
	cout<<"����:\n"<<a<<endl;

	return 0;

}