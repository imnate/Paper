#include <iostream>

using namespace std;

int main()
{

	int a;

	cout << "Enter a integer:";
	cin >> a;
	cout << endl;

	for(int i = a ; i >= 1 ; i--)
	{
		for(int j = i ; j >=1; j--)
		{
			cout << "*";

		}
	
			cout << endl;
	}










	system("pause");
	return 0;
}