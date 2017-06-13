#include <iostream>
using namespace std;

int main()
{
	int number,count;

	cout<<"Please input an integer for listing all the primes less than integer: ";
	cin>>number;
	cout<<"Promes less than "<<number<<" are ";

	for(int i=2;i < number;i++)
	{
		count=0;
		for(int j=2;j < i;j++)
		{ 
			if(i%j==0)
			{
				count=1;
				break;
			}
		}
		if(count==0)
			cout<<i<<" ";
	}
	cout<<endl;

 system("pause");
 return 0;
}