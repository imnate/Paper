#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << "Please input an integer for listing all the primes less than the integer:";
	cin >> num;
	cout << "Primes less than " << num << " are ";

	for (int prime=2; prime < num; prime++)
	{
		int a = 0;
		for (int i = 2; i<=prime; i++)
		{
			if (prime % i == 0)
			{
				a++;
			}
		}
		if (a == 1)
		{
			cout << prime << " ";
		}
	}

	system("pause");
	return 0;
}