#include <iostream>
#include <iomanip>
using namespace std ;

int main()
{
	int num ;
	cout << "Please input an integer for listing all the primes less than the integer:  " ;
	cin >> num ;
	cout << "Primes less than " << num << " are: 2 ";

	for (int i=2; i<num; i++){

		for (int j=2; j<i; j++){

				if (i % j == 0) 
					break;
				else if (i == j+1)
					cout << i << " ";
			} 
	}
	system("pause") ;

}
