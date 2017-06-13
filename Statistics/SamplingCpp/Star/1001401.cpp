#include <iostream>
using namespace std ;
int main()
{
	int number ;
	cin >> number ;
	
	for ( ; number >=1 ; number-- )//迴圈條件(行數)
     {
	    for ( int i = 1; i <= number; i++ )//迴圈條件(*數)
         
			 cout << "*";
             cout << endl;
	}

	system("pause");
}
