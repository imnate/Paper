#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{int x;
	cout << "�п�J�~��:";
	cin >> x;
	if(x%400==0||(x%4==0&&x%100!=0))
	{
		cout << x<< "����~\n";
	}
	else
	{
		cout << x<< "�����~\n";
	}
	system("pause");
	return 0;
}