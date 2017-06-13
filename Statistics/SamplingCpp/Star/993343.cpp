//993343 §d«a¿o 20110402
#include <iostream>
using namespace std ;
int main ()
{
	int size ;
	cout << "input a number :" << endl ;
	cin >> size ;
	for(int i=size; i>0; i--)
	{
		for(int j=i; j>0; j--)
		{
			cout << "*" ;
		}
		cout << endl ;
	}

	system ("pause") ;
	return 0 ;
}

