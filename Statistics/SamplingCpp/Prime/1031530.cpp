#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
   int i,j,integer,t;
   
   cout << "Please input an integer for listing all the primes less than the integer:";
   cin  >> integer;
   cout << "Primes less than"<<setw(3)<<integer<<setw(3)<<"are :";
   for(i=2;i<integer;i++)
   {
	   t=0;
	   for(j=1;j<=i;j++)
	   {
	     if(i%j==0)
			 t+=1;
	   }

	   if(t>2)
		   continue;
	   cout<< setw(4)<<i;
   }
   
   system("pause");

   return 0;

}