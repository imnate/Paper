#include<iostream>

using namespace std;


int main()
{
	int n;
	int a;

	cout << "Please input an integer for listing all the primes less than the integer: ";
	
	cin >> n;

	cout<< endl << "Primes less than " << n << " are ";

	for(int i=1; i < n; i++)
	{
		a=0;

		for(int j=2; j<=i; j++)
		{
			if(i % j == 0)
				a++;
		}

		if(a == 1)
			cout<< "  " << i ;

	}
	system("pause");
	return 0;
}