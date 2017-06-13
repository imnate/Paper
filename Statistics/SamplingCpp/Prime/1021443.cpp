#include <iostream>
using namespace std;

int main()
{
	int val = 0;
	bool x = true;
	while (x == true){
		cout << "Please input an integer for listing all the primes less than the integer:  ";
		cin >> val;
		if ( val < 2 ){
			cout << "No prime less than " << val << "." << endl;
			break;
		}
		cout << "Primes less than " << val << " are " ;
		if ( val > 1)
			cout << "2 ";
		for (int i = 2; i < val; i++){
			for (int j = 2; j <= i; j++){
				if (i % j == 0)
					break;
				else if (i == j+1)
					cout << i << " ";
		
				}			
		}	
		
		cout << endl;
	}
	system("pause");
	return 0;
}