#include<iostream>

using namespace std;

int main()
{
	int i;

	cout << "�п�J�T�������:";

	cin >> i;

	for (int j=i;j>0;j--)
	{
	    for(int k=1;k<=j;k++)
			cout << "*";
			cout << "\n";
	}

	system("pause");

	return 0;
}