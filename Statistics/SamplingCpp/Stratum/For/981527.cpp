#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int n,m=1;
	
	cout<<"�п�J������:\n";
	cin>>n;
	for (int i=1; i<=n; i++)
	m=m*i;	
	cout<<"����:\n"<<m<<endl;
	m=1;
	
	return 0;
}