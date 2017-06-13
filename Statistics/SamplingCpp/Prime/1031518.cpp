#include<iostream>
using namespace std;


int main()
{
	int integer , j , i;

	cout<<"Please input an integer for listing all the primes less than the integer: ";
	cin>>integer;
	cout<<"Primes less than "<<integer<<" are ";

	for ( i = 2 ; i < integer ; i ++){
		for ( j = 2 ; j < i ; j ++  ){
			if (i % j == 0 ) 
			break;
		}
		if ( i == j )
			cout<<j<<" ";
	}
    cout<<endl;

	system("pause");
return 0;
}