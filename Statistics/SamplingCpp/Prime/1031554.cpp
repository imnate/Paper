#include <iostream>
using namespace std;

int main()
{
	int i,j,num;
	cout << "Please input an integer for listing all the primes less than the integer:";
	cin >> num;

	cout << num << " prime less than " << num << " are";

	

	for (i = 2; i<num; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i%j == 0)
				break;
		}
	
		if (i == j)
		{
			cout << " " << i;
		}
		 
	}

	system("pause");
	return 0;
}

