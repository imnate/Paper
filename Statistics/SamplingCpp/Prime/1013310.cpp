#include<iostream>
using namespace std;

int main()
{
	int n;
	int a=0;
	cout << "Please input an integer for listing all the primes less than the integer: ";
	cin >> n;

	cout << "Primes less than " << n << " are ";
	for(int i=2 ; i<n ; i++)
	{
		a=0;
		for(int j=2 ; j<i ; j++)
		{
			if(i%j==0)
			{	
				a=1;
			}	
		}
				
		if(a==0)
		{
			cout << i << " ";
		}
	}
	cout << endl;

	system("pause");
	return 0;
}