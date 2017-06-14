#include<iostream>
using namespace std;
int main()
{
	int x=0,s=1;
	cout<<"請輸入階乘數:"<<endl;
	cin>>x;
do
	{
		s=s*x;
		x--;
	}
	while(x>0);
	cout<<"答案:\n"<< s <<endl;
	
	return 0;
}