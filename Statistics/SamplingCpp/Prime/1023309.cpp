#include<iostream>
using namespace std;

int main()
{
	int a ;
	int d = 0 ;
	cout << "Please input an integer for listing all the primes less than the integer:  ";
	cin >> a;
	cout << endl << "Primes less than " << a << " are ";
	for(int b = 2 ; b <= a ; b++ )
	{
		for(int c = 2 ; c <= b ; c++ )
		{
			if( b % c == 0 )
				d ++;
		}
		if( d == 1 )
			cout << b << " ";
		d = 0;
	}
	cout << endl;
	system("pause");
	return 0;
}