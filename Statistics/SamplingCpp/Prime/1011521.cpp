#include<iostream>
using namespace std;
int main()
{

	int total;//��J���D���Ʀr
	int number = 0;//�P�_�O�_����� number��1�ɥN���O���
	cout <<"Please input an integer for listing all the primes less than the integer:";
	cin >> total;
	cout <<"Primes less than " << total << " are " ;
	for(int i = 2; i <total ;i++) //�P�_�q2��total����
	{
		for (int j = 2 ; j < i  ; j++) //�P�_i���ƬO�_�����
		{
			if ( i % j == 0 )//���p�l�Ƶ���0 �� number�令1
			{
				number = 1;
				break;
			}
		}
		if (number == 0)
		{
			cout << i << " ";
		}
		number = 0; //number�k0
	}
	system("pause");
}