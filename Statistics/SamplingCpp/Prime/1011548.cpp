#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Please input an integer for listing all the primes less than the integer: ";
	cin>>number;
	cout<<endl;

	cout<<"Primes less than "<<number<<" are 2 "; 
	for(int i=2;i<=number;i++)
	{
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
			else if(i==j+1)
			{
				cout<<i<<" ";
			}		
		}
	}

	cout<<endl;
	system("pause");
	return 0;
}