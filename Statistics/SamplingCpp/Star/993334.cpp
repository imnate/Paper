//993334_HW3
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"input:";
	cin>>a;
	
	for(int i=1;i<=a;i++)
	{
		
		for(int j=a;j>=1;j--)
		{
			if(i<=j)			
			cout<<"*";
			else				
			cout<<" ";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}