#include<iostream>
using namespace std ;

int main()
{
   int integer;
   int i=2;
   int j;
   cout<<"Please input an integer for listing all the primes less than the integer:";
   cin>>integer;
   cout<<"Primes less than "<<integer<<" are ";

   for(;i <= integer ; i++ )
   {
	   
      for(j=2;j <= i - 1;j++ ) {
         if( ( i % j ) == 0 )
            break;
	  }

      if( j == i )
      cout << i << " ";
   }
  


   system("pause");
   return 0;
}

