#include<iostream>



int main()
{
	int input , i, j ;

	 std ::cout << "Please input an integer for listing all the primes less than the integer " << std :: endl ;
	 std ::cin >> input ;

	 std ::cout << "\n" ;
	  std ::cout<<" Primes less than"<< input<< " are " << std ::endl;
	for ( i=2 ; i<=input ; i++ )
	{
		j = 2 ;

		while ( j<i )
		{
			if ( i%j == 0 )
				break;
			j++ ;
		}

		if ( j == i)
			 std ::cout << j<< "    "   ;
	}

	system("pause") ;
	return 0 ;

}