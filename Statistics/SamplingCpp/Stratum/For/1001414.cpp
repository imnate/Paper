#include <iostream>

using namespace std;

int main()
{
	int number = 1 ;
	int x;

	cout << "�п�J������:"<< endl;
	cin >> x;

	for(int i = 1; i <= x; i++)
	{
		number=number*i;


	}
	cout << "����:" <<endl << number << endl;

	system("pause");
	return 0;
}