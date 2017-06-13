#include <iostream>

using namespace std ;

int main(){

	int num , i , k ;

	cout << "Please input an integer for listing all the primes less than the integer:" ;

	cin >> num;

	cout << "Primes less than " << num << " are " ;

	for ( i = 2 ; i < num ; i++ ){

		for ( k = 2 ; k < i ; k++ ){

			if ( i % k == 0 )

			break ;

		}
		if ( i == k )

			cout << k << " " ;

	}
	cout << endl ;

system ( " pause " ) ;

return 0 ;

}