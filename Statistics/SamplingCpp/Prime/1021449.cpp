//A program to read a integer n from the user, and list all the primes less than the n.
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Please input an integer for listing all the primes less than the integer: ";
	cin >> n;
	cout << "Primes less than " << n << " are ";
	for (int i=2; i<n; i++) 
		for (int j=2; j<i; j++){
				if (i % j == 0) 
					break;
				else if (i == j+1)
					cout << i << " ";
			} 
	system("pause");
}
