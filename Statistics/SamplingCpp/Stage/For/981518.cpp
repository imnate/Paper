#include<iostream>
using namespace std;
int main()
{
	int num;
	int a=1;

	cout<<"請輸入階乘數:"<<endl;
	cin>>num;

	for(num;num>0;num--)
	{
		a=num*a;
	}
	cout<<"答案:\n"<<a<<endl;

	return 0;

}