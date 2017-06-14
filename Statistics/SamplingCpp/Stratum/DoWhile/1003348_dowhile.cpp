#include<iostream>
using namespace std;
int main()
{
	int c,temp3=1;
	cin>>c;
	cout<<"請輸入階層數"<<endl;
	do
	{
		temp3*=c;
		c--;
	}while(c>0);
	cout<<"答案"<<temp3<<endl;
	
	system("pause");
	return 0;
}