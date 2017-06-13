#include<iostream>
using namespace std;

int main()
{
	cout << "Enter a integer:" << endl;;
	int num = 0;
	cin >> num ;
	for ( int i = 0 ; i <= num-1 ; i++ )
	{
		for ( int j = num-i+1 ; j > 1 ; j-- )
		{
			cout << "*"  ;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}