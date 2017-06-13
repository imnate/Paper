#include<iostream>
using namespace std;

int main(){
	int number1;
	int number2;
	int number3;
	int total = 1 ;
	int sum = 1 ;
	int ans = 1;
		cin >> number2;
			
	int j = number2;

	while( j>0 ){
		sum = sum * j;
     j--;
	}
	cout << sum<< endl;
	
	
	system("pause");
	return 0;

}

