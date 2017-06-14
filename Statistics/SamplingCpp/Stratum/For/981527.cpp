#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int n,m=1;
	
	cout<<"請輸入階乘數:\n";
	cin>>n;
	for (int i=1; i<=n; i++)
	m=m*i;	
	cout<<"答案:\n"<<m<<endl;
	m=1;
	
	return 0;
}