#include <iostream>

using namespace std;

int main()
{
	int interger, prime, c;
	cout << "Please input an integer for listing all the primes less than the integer: " ;
	cin >> interger ;


	cout << "Primes less than " << interger << " are" ; 
	for(prime=2;prime<interger;prime++)
	{
	for (c=2;c<=prime;c++)
	{
		if (prime%c==0)
			break;
	}	
		if(c==prime)
			cout << " " << prime ;
	}
	cout << endl ;

	system("pause");
	return 0 ;
}