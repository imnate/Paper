#include <iostream>
using namespace std;
int main()
{
int a;
while(true)
{
	cout<<"Please input an integer for listing all the primes less than the integer:";
	cin>>a;	
	cout<<"Primes less than"<<" "<<a<<" "<<"are:";
	if(a==2)
		cout<<"2";
		for(int i=2;i<a;i++)
		{
			int j,flag=1;
			for(j=2;j<i;j++)
			{
				if(i%j==0)
					flag=0;
			}
			if(flag)
				cout<<i<<" ";
		}
		cout<<endl;
}	
system("pause");
 return 0;
}