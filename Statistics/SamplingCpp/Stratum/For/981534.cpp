#include<iostream>
using namespace std;

int main()
{	
	int n;
	int ans1=1;
	int ans2=1;
	int ans3=1;
	cout<<"請輸入階乘數:"<<endl;
	cin>>n;
	for(int i=n;i>0;i--)
	{	
		
		ans1=ans1*i;
	}
	cout<<"答案:"<<endl<<ans1<<endl;


	cout<<"請輸入階乘數:"<<endl;
	cin>>n;
	
	cout<<"請輸入階乘數:"<<endl;
	cin>>n;

	
	return 0;
}