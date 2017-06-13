#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{int x;
	cout << "請輸入年分:";
	cin >> x;
	if(x%400==0||(x%4==0&&x%100!=0))
	{
		cout << x<< "為潤年\n";
	}
	else
	{
		cout << x<< "為平年\n";
	}
	system("pause");
	return 0;
}