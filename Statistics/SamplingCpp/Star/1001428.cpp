#include<iostream>

using namespace std;

int main()
{
	int integer;
	cout << "Enter a integer" << endl;
	cin >> integer;
	int i;
	int j;
	for( i = integer ; i > 0 ; i-- )
	{
		for( j = 0 ; j < i ; j++ )
		cout << "*";
		cout << endl;
	}


	system("pause");
	return 0;
}