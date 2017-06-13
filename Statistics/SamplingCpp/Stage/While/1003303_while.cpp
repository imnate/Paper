#include<iostream>
using namespace std;
int main()
{
	int integer,ans=1,j,sum=1,total=1;
	

	//while迴圈
	cout<<"請輸入階乘:"<<endl;
	cin>>integer;
	j=integer;
	while(j>0)
	{
		sum=sum*j;
		j--;
	}
	cout<<"答案:"<<endl;
	cout<<sum<<endl<<endl;
	
	
	system("pause");
	return 0;
}