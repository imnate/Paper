#include<iostream>
using namespace std;
int main()
{
	int a;
	int b=1;
	cout<<"請輸入階乘數:"<<endl;
	cin>>a;

	for(a;a>0;a--)
	{
		b=a*b;
	}
	cout<<"答案:\n"<<b<<endl;

	return 0;

}