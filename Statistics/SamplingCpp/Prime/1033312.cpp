#include<iostream>

using namespace std;

int main()

{

	int number;
	cout << "Please input an integer for listing all the primes less than the integer:  \n";
	cin >> number;

	bool found = true;
	for (int i = 2; i < number; i++)
	{
		for (int j = 2; j < i; j++)
		{
			
			if (i%j == 0)
			{
				found = false;
				break;
			}

			else
			{
				cout << i << "  ";
				break;
			}
		}
		
		
	}
	cout << endl;

	system("pause");
	return 0;
}
