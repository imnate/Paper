#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main ()
{
	int number;//input
	int count = 0;//借计Τㄢ计 : 1蛤セōcount 单 2 碞琌借计
	cout << "Please input an integer for listing all the primes less than the integer: ";
	cin >> number ;
	cout << endl << "Primes less than " << number << " are ";
	for ( int i = 2 ; i < number ; i++ )
	{
		for ( int j = 1 ; j <= i ; j ++ )
		{
			if ( i % j == 0)
			{
				count ++;
			}

		}
			if ( count == 2 )
			{
				cout << i << " ";
			}
			count = 0;
		
		
	}
	cout << endl;
	system ("pause");
	return 0 ;
}