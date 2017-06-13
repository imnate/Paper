#include <iostream>
using namespace std;

int main () {
	int n, i, j, prime[200000]={2}, prime_ptr;
	cout << "Please input an integer for listing all the primes less than the integer:";
	cin >> n;
	prime_ptr=0;
	for(i=3;i<=n;i++)
	{
		for(j=0;j<=prime_ptr;j++)
			if(i%prime[j]==0)
				break;
		if(j>prime_ptr)
			prime_ptr++, prime[prime_ptr]=i;
	}
	cout << "Primes less than " << n << " are ";
	for(i=0;prime[i]!=0;i++)
		cout << prime[i] << ' ';
	cout << endl;
	system("pause");
	return 0;
}