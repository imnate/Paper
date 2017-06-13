#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a integer:\n";
	cin>>n;
	if (n<=0)
		cout<<"Error input!!\n";
	else
		for(int i=n;i>=1;i--)
		{
			for(int j=i;j>=1;j--)
			{
				cout<<"*";			
			}
			cout<<endl;
	}
   system ("pause");
   return 0;
}