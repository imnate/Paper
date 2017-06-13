#include<iostream>
using namespace std ;
int main ()
{
	int n;
	cout<<"Enter a integer: \n";
	cin>>n;
	if(n<=0)
	{
		cout<<endl<<"You get a wrong range, please input again!!\n";
			return main();
	} 
	for(int i=n;i>=1;i--) 
	{
		for(int j=i;j>=1;j--)
				cout<<"*";
		cout<<endl;}
	system("pause") ;
	return 0;
}