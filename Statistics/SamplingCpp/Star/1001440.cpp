#include <iostream>

using namespace std;

int main()
{
	int integer = 0;
	cout << "Enter a integer:" << endl;
	cin >> integer;

	for ( int i = integer ; i > 0 ; i-- )
	{
		for ( int j = i ; j > 0 ; j-- )
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}