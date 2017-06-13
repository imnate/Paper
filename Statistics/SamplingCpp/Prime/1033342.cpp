#include<iostream>
using namespace std;
int main()
{
	int number;
	int i, j;
	cout << "請輸入一個比2大的數： ";
	cin >> number;
	cout << "小於" << number << "的質數有：\n";
	for (i = 2; i < number; i++)
	{
			for (j = 2; j < i; j++)

			{
				if (i%j == 0)
					break;
			}

			if (i == j)

				cout << j << "  ";
	}
		cout << "\n";
		system("pause");
		return 0;
}