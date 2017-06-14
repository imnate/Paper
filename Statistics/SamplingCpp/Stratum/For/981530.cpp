#include<iostream>
using namespace std;

int factorial(int a);

void main()
{	
	int a;
	cout<<"請輸入階乘數:"<<endl;
	cin>>a;
	
	int answer=1;

	for(int i=a;0<i;i--)
	{
		answer*=factorial(i);	
	}
	
	cout<<"答案:"<<endl<<answer<<endl;

}

int factorial(int a) 
{
	if(a==1)
		return 1;
	else
		return a;
}