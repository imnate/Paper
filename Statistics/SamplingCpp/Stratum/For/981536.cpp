#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int i,value1,result1=1;

	cout<<"請輸入階乘數:"<<endl;
	cin>>value1;

	for(i=value1;i>0;i--)
	{
		result1=result1*i;
	}

	cout<<"答案:"<<endl;
	cout<<result1<<endl;

	return 0;
}