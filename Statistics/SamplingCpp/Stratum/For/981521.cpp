#include<iostream>
using namespace std;
int main()
{
	int result;
	cout<<"�п�J���h��"<<endl;
	cin>>result;
	if(result<0)
	{
		cout<<"�п�J���h��"<<endl;
	}
	else
	{
		if(result==0 || result==1)
		{
			cout<<"����:"<<endl;
			cout<<"1"<<endl;
		}
		else
		{
			for(int i=result-1;i>0;i--)
			
				result=i*result;
				cout<<"����:"<<endl;
				cout<<result<<endl;
			
		}
	}
	

	return 0;
}