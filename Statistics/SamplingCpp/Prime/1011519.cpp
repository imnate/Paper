#include <iostream>
using namespace std;

int main()
{
 int number;
 cout<<"Please input an integer for listing all the primes less than the integer: ";
 cin>>number;
 cout<<"Prime less than "<<number<<" are ";
	for(int i=2;i<=number;i++)
	{
		int count=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count==2)
		cout<<i<<" ";

	}
 system("pause");
 
}