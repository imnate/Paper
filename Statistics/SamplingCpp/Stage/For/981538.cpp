#include<iostream>
using namespace std;
int main(){
	int n,m,b,a,c,v,p,o;
	cout<<"�п�J������:\n";
	cin>>n;
	m=n;
	for(int i=1;i<=n;i++)
	{
		m=i*m;
	}
	m=m/n;
	cout<<"����:\n"<<m<<"\n";

	return 0;
}