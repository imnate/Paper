//991540 hw1
//�g�@�ӵ{����Ū���ϥΪ̿�J���@�Ӿ��n�A�M�Უ�ͤ@�ӥΨ���䳣��n�ӬP��(*)�զ����T���ΡC
#include<iostream>
using namespace std;

int main()
{
	int num;//�]�J��J���ܼƦW�٬�num
	cout << "Enter a integer : \n";
	cin >> num;
	if ( num < 0)
		cout<<"Error!!";
	else
	{
		for(int i=num ; i>0 ; i--)
		{
			for(int j=0 ; j<i ; j++)
			{
				cout<<"*";
			}
			cout <<endl;//����
		}
	}
	system("pause");
	return 0;
}