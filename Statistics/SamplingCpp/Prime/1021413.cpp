//Prime number
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Please input an integer for listing all the primes less than the integer: ";
	cin >> n;
	cout << "Primes less than "<< n << " are ";

	for( int i = 2; i < n; i++ ){
		int k = 0;//���� i ��Q�㰣�X��

		for( int j = 2; j < n; j++ )//��Q�㰣1�� k �N�[1
			if( i % j == 0 )
				k++;
			
		if( k < 2 )//i �u��Q�㰣1�����ƦC�X��
			cout << i << " ";
		
	}
	cout << endl;

	system("pause");
	return 0;
}
