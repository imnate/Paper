#include <iostream>
using namespace std;
int main ()
{
	int year; // 宣告一個變數表示輸入的年份

	cout << "Checking whether a year is leap year or not. Please input a year: " << endl;
	cin >> year;

	if(year<0) // 如果輸入的年份小於0,當作輸入錯誤
	{
		cout << "Error! Please input again." << endl;
	}
	else
	{
		if((year%400==0) || (year%4==0) && (year%100!=0)) // 閏年條件:年份可整除400或是年份整除4並且不整除100
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

