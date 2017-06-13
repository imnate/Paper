#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter a integer: ";
	cin >> number;
	cout << endl;

	for( int i = number; i > 0; i-- )
	{
		for( int j = i; j > 0; j-- )
		{
			cout << "*";
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}