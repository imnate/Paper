#include<iostream>
using namespace std;

int main()
{
	int a=0,k=1;
	cout<<"請輸入階乘數:"<<endl;
	cin>>a;
	
	do
	{
		k=k*a;
		a--;
	}
	while(a>0);
	cout<<"答案:\n"<<k<<endl;
	
	
	return 0;
}