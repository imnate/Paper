#include<iostream>
using namespace std;
int main()
{
	int number;
	int i, j;
	cout << "�п�J�@�Ӥ�2�j���ơG ";
	cin >> number;
	cout << "�p��" << number << "����Ʀ��G\n";
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