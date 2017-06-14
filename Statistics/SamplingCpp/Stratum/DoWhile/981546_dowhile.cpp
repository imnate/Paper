#include<iostream>

using namespace std;

void main()
{


	int a,b,c,i,j,k;
	int z=1,x=1,v=1;


	

	cout<<"請輸入階乘數:"<<endl;
	cin>>c;
	k=c;
	do
	{
		v=v*k;
		k--;
	}while(k>0);
	cout<<"答案:"<<endl;
	cout<<v<<endl;


}