#include <iostream>
using namespace std;
int main ()
{
	int year; // �ŧi�@���ܼƪ�ܿ�J���~��

	cout << "Checking whether a year is leap year or not. Please input a year: " << endl;
	cin >> year;

	if(year<0) // �p�G��J���~���p��0,��@��J���~
	{
		cout << "Error! Please input again." << endl;
	}
	else
	{
		if((year%400==0) || (year%4==0) && (year%100!=0)) // �|�~����:�~���i�㰣400�άO�~���㰣4�åB���㰣100
		{
			cout << year << " is a leap year."<< endl;
		}
		else
		{
			cout << year << " is not a leap year." << endl;
		}
	}
	
	system("pause");
	return 0;
}

