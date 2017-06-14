#include<iostream>

using namespace std;

int main()
{
	int i,ans=1,j=1;

	cout<<"請輸入階乘數:\n";
	cin>> i;

	for(j=1;j<=i;j++)//for迴圈
		ans=ans*j;

	cout<<"答案:\n";
	cout << ans<<endl;

	system("pause");

	return 0;
}