#include<iostream>
using namespace std;

int main()
{
	int number, n;
	cout << "Please input an integer for listing all the primes less than the integer:";
	cin >> number;
	cout << "Primes less than " << number << " are ";
	
	for(n=2; n<number; n++)//§ä½è¼Æ
	{
		int k;
		for (k=2; k<n; k++)
		{
			if(n%k==0)
				break;
		}
		if(n==k)
			cout << n << " ";
	}
	cout << endl;
	system ("pause");
	return 0;
}