#include <iostream>
using namespace std ;
int main()
{
	int number ;
	cin >> number ;
	
	for ( ; number >=1 ; number-- )//�j�����(���)
     {
	    for ( int i = 1; i <= number; i++ )//�j�����(*��)
         
			 cout << "*";
             cout << endl;
	}

	system("pause");
}
