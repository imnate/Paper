#include <iostream>
using namespace std;

int main()
{
	int num,i,j,status=0;

	cout<<"Please input an integer for listing all the primes less than the integer:";
    cin>>num;

	cout<<num<<" prime less than "<<num<<" are ";

	for(i=2;i<num;i++)
	{
		status = 0;
		for(j=2;j<=i ;j++)
		{
			if(i %j ==0)
			{
				status++;
			}
		}
		if(1==status)
		{
		cout<<i<<" ";
		}
	}
	system("pause");
	return 0;
}