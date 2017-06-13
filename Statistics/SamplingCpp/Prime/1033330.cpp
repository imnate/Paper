#include <iostream>
using namespace std;

int main()
{
	int value,i,num,j;
	cout<<"Please input an integer for listing all the primes less than the integer:";
	cin >> value;
	cout << "prime less "<<value<<" is ";
	for (i=2;i<value;i++)
	{
		for(j=i-1;j>=1;j--)
		{
		num=i%j;
		if(num==0)
			break;
		}
	if (j==1)
		cout <<i<<" ";
	}
	system ("pause");
	return 0;
}