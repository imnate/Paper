#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a;

	cout << "Please input the number¡G";
	cin >> a;

	cout << "Primes less than " << a << " are ¡G";

	cout << "2" << " ";

	for (int i = 3; i <= a; i++)
	{
		for (int j = 2; j <= i; j++)
		{
			if (i % j == 0)
				break;

			else if (i == j+1)
				cout << i << " ";
		}
	}


	system("pause");
	return 0;
}

