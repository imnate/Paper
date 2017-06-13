#include<iostream>
using namespace std;
int main()
{
	int result;
	cout<<"請輸入階層數"<<endl;
	cin>>result;
	if(result<0)
	{
		cout<<"請輸入階層數"<<endl;
	}
	else
	{
		if(result==0 || result==1)
		{
			cout<<"答案:"<<endl;
			cout<<"1"<<endl;
		}
		else
		{
			for(int i=result-1;i>0;i--)
			
				result=i*result;
				cout<<"答案:"<<endl;
				cout<<result<<endl;
			
		}
	}
	

	return 0;
}