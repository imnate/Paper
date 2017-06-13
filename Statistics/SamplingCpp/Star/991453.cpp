#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "Enter a number:" << endl;
	cin >> number;

	for(int i = 1 ; i <= number ; i++)
	{
		for(int j = number ; j>=i ; j--)
		{
			cout << "*";
		}
		
		cout << "\n";
	}

	system("pause");
	return 0;

}