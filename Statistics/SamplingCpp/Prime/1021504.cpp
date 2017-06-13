#include <iostream>
using namespace std;

int main()
{
	int num;
	int i,j;

	cout << "Please input an integer for listing all the primes less than the integer:  ";
	cin >> num;

	for(i=2; i<num; i++)
	{
		for(j=2; j<=i; j++)
		{
			if(i%j == 0)
			break;
		}
		if(i==j)
			cout << "Primes less than " << num << " are " << j << "\t"; 
	}
    
	system("pause");
	return 0;
}