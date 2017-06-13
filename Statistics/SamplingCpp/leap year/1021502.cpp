#include <iostream>
#include<iomanip>
 
using namespace std ;

int main()
{
	
	int n1 = 0;
	
	cout << "Checking whether a year is leap year or not. Please input a year: " ;
	

	cin >> n1 ;

	if (n1%4 == 0 && n1 % 100 != 0 || n1 % 400 == 0){
		cout << n1 << "is  a leap year. " << endl ;
	}
	
	else if(n1) {
		cout << n1 << " is not a leap year. " << endl ;
	}


	system("pause") ;
	return 0 ;
}