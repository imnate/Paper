#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	int n;
	int prime=0;
	int total=0;
	cout << "Please input an integer for listing all the primes less than the integer:\n";
	cin >> n;
	cout << "Primes less than " << n << " are 2\t3";
	for(int i = 2; i <= n; i++)
	{
		
		for(int j = 2; j <= pow(i,0.5); j++)
		{
			
			prime = i % j;
			if (prime == 0)
				break;
		}
		if (prime != 0)
		{
			total++;
			cout << "\t" << i ;
		}
	}
	cout << endl;
	cout << "total: " << total+2 <<endl;
	
	system("pause");
	return 0;
}