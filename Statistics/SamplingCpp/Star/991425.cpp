#include<iostream>
using namespace std;
int main()
{
	int integer;

	cout << "Enter a integer: ";
	cin >> integer;
	cout << endl;


	for( int i = integer; i >= 1; i-- )
	{
		for( int j = 1; j < i; j++ )
		{
			cout << "*";
		}
		cout << "*" << endl;
	}

	system("pause");
	return 0;
}