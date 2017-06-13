#include <iostream>
using namespace std;
int main()
{
	int i;
	cout << "Enter a interger: " << endl;
	cin >> i;
	for(;i>=1;i--)
	{
		for(int j = i;j>=1;j--)
			cout << "*";
		cout << endl;
	}
	system ("pause");
	return 0;
}