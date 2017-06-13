#include<iostream>

using namespace std;

int main()
{
	int i;

	cout << "請輸入三角形邊長:";

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