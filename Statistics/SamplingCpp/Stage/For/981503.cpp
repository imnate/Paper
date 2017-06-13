#include <iostream>
using namespace std;

void main()
{
	int input;
	int result;
	int i,j;
	//for
	result=1;
	cout<<"請輸入階乘數:"<<endl;
	cin>>input;
	if(input==0)
		cout<<"答案:\n"<<input<<endl;
	else
	{
		for(i=0,j=1;i<input,j<=input;i++,j++)
		{
			result=result*j;
		}
		cout<<"答案:"<<endl;
		cout<<result<<endl;
	}
	//while
	result=1;
	cout<<"請輸入階乘數:"<<endl;
	cin>>input;
	
	//do while
	result=1;
	
}