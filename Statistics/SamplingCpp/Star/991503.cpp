#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter a integer:"<<endl;
cin>>n;


for(int j=1;j<=n;j++)
{
	for(int i=n+1;i>j;i--)
		cout<<"*";
	cout<<endl;			
}

system("pause");

return 0;
}
