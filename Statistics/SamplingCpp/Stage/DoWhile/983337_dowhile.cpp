#include<iostream>
using namespace std;
int main()
{

	cout<<"請輸入階乘數:"<<endl;




	int t,u=0,v=1;

	cin>>t;
	do
	{
		u=u+1;
		v=v*u;
	}while(u<t);
	cout<<"答案:"<<endl<<v;

	cout<<endl;


return 0;
}
