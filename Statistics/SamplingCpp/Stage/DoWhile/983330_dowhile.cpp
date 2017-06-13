#include<iostream>
using namespace std;

int main()
{
	int input,sum=1;
	cout<<"請輸入階乘數:"<<endl;
	cin>>input;
	
	do
	{

		sum = sum * input;
		input--;
	}
	while(input>0);
	cout<<"答案:"<<endl<<sum<<endl;

return 0;
}