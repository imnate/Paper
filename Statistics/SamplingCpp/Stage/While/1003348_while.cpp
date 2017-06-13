#include<iostream>
using namespace std;
int main()
{
	cout<<"請輸入階層數"<<endl;
	int b,temp2=1;
	cin>>b;
	while(b>0)
	{
		temp2*=b;
		b--;
	}
	cout<<"答案"<<temp2<<endl;
	
	system("pause");
	return 0;
}