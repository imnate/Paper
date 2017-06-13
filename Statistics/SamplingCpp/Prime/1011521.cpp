#include<iostream>
using namespace std;
int main()
{

	int total;//块饼―ぇ计
	int number = 0;//耞琌借计 number1ぃ琌借计
	cout <<"Please input an integer for listing all the primes less than the integer:";
	cin >> total;
	cout <<"Primes less than " << total << " are " ;
	for(int i = 2; i <total ;i++) //耞眖2total计
	{
		for (int j = 2 ; j < i  ; j++) //耞i计琌借计
		{
			if ( i % j == 0 )//安緇计单0 р numberэΘ1
			{
				number = 1;
				break;
			}
		}
		if (number == 0)
		{
			cout << i << " ";
		}
		number = 0; //number耴0
	}
	system("pause");
}