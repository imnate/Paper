#include <iostream>

using namespace std ;

int main()
{
	int n ;
	cout << "Enter a integer: "<<endl ;
	cin >> n ;
	for( int w = n ; w > 0 ; w-- )
	{
		for( int j = 1 ; j <= w ; j++ )
		{
			cout << "*" ;
		}
		cout << endl ;
	}

	system("pause") ;
	return 0 ;
}
