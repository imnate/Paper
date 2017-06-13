#include<iostream>
using namespace std;
int main(){
	int n,m,b,a,c,v,p,o;
	cout<<"請輸入階乘數:\n";
	cin>>n;
	m=n;
	for(int i=1;i<=n;i++)
	{
		m=i*m;
	}
	m=m/n;
	cout<<"答案:\n"<<m<<"\n";

	return 0;
}