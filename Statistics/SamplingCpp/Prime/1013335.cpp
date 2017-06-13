# include <iostream>

using namespace std;

int main()
{
	cout << "Please input an integer for listing all the primes less than the integer : " ;

	int integer;
	int counter=0;
	int prime;

	cin >> integer;

	cout << "Primes less than " << integer << " are : ";

	for ( prime=2 ; prime<integer ; prime++ )
	{
		for ( int j=1 ; j<=prime ; j++ )
		{
			if ( prime % j == 0)
			{
				counter++;
			}			
		}

		if ( counter == 2 )
			cout << prime << " ";

		counter = 0;
	}

	cout << endl;
	
	system("pause");
	return 0;

}