#include <iostream> 
using namespace std;

int main()  //§ä½è¼Æ
{  
	int n ,a;  
	cout << "Please input an integer for listing all the primes less than the integer:  ";
	cin >> a;
	cout << "Primes less than " << a << " are ";
	for( int i = 2 ; i <= a ; i++ ){ 
		n = 0;  
	for( int j = 1 ; j <= i ; j++ ) 
		if( i % j == 0 ) 
			n++;  
		if( n == 2 )  
			cout << i << " ";
	}
	cout << endl;
	system("pause"); 
	return 0; 
} 