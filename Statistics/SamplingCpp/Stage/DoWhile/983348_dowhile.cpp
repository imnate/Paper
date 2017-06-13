#include<iostream>
using namespace std;

void main()
{
	int integer,integer1,integer2,x=1,y=1,z=1;
	
	

	
    cout<<"請輸入階乘數:"<<endl;
	cin>>integer2;
if(integer2==0)

	cout<<"答案:"<<endl<<1<<endl;
else
{
	z=integer2-1;
	
	do
	{
		integer2*=z;
		z--;
	}
	while(z>0);

	cout<<"答案:"<<endl<<integer2<<endl;
}
}