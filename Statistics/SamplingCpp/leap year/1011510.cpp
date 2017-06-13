//Determine whether the input is leap year or not.
#include <iostream>

using namespace std;

int main()
{
	double a;
		
	int b;

	cout << "Enter a year(AD).\n";

	cin >> a;
	
	b = a;

	if (a <= 0 || a-b != 0)
		cout << "You enter the wrong year,please input again.\n";

	else if (b%4 == 0 && b%100 != 0 || b%400 == 0)
		cout << "It's a leap year.\n";

	else
		cout << "It's a common year.\n";
	
	system("pause");
	return 0;
}