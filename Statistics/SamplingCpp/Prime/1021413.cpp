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
		int k = 0;//紀錄 i 能被整除幾次

		for( int j = 2; j < n; j++ )//能被整除1次 k 就加1
			if( i % j == 0 )
				k++;
			
		if( k < 2 )//i 只能被整除1次的數列出來
			cout << i << " ";
		
	}
	cout << endl;

	system("pause");
	return 0;
}
