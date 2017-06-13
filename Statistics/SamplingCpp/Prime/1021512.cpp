#include<iostream>
using namespace std;
int main()
{
	int number = 0;

	while (number != -1)
	{
		cout << "Please input an integer for listing all the primes less than the integer:  " << endl;
		cin >> number;
		cout << "Primes less than " << number << " are ";
		if (number == 1)
			cout << " not found ";
		for (int i = 2; i < number;i++)
		{
			for (int j = 2; j < number; j++)
			{
				if (i == j)
					cout << i << " ";
				else if (i % j == 0)
					break;
			}
		}
		cout << endl;
	}
	system("pause");

}