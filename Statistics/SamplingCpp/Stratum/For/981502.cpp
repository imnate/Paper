#include <iostream>
using namespace std;

int main()
{
	int a=0,b,c=1;

	cout<<"請輸入階乘數:\n";
	cin>>a;
	for(b=1;b<=a;b++)
	{
		c=c*b;
	}
	cout<<"答案:\n";
	cout<<c<<endl;
	
	return 0;
}