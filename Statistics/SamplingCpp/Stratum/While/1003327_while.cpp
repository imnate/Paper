#include<iostream>

using namespace std;


int _while(int );
int main()
{
	int a=0;
	cin>>a;
	cout<<_while(a)<<endl;
	
	system("pause");
	return 0;
}
int _while(int m)
{
	int i=1;
	int sum=1;
	while(i<=m)
	{
		sum=sum*i;
		i++;
	}
	return sum;
}