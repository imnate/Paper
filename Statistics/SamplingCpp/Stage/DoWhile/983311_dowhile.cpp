#include<iostream>
using namespace std;

int main()
{
	int sum=1,x=1,n=0;			//for
	cout<<"請輸入階乘數:"<<endl;
	cin>>n;
	
	do
	{
		sum=x*sum;
		n--;
		x++;
	}while(n>0);
	cout<<"答案\n"<<sum<<endl;
	
	return 0;
}