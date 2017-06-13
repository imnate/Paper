#include<iostream>

using namespace std ;

int main()
{
	int y ,x[100]={0} ;
	cout << "Please input an integer for listing all the primes less than the integer:  " ;
	cin >> y ;

	for(int i = 2 ; i <= y ; i++)
	{
		
		for(int j = 2 ; j < i ; j++)
		{
			if(i % j == 0)
			{
				x[i] = 1 ;
			}
			
		}
	}
	for(int p = 2 ; p < y ; p++)
	{
		if(x[p] == 0)
		{
			cout << p << " " ;
		}
	
	}
	
	
	
	






	system("pause") ;

}