#include<iostream>
using namespace std;

int main() {
	int n, count=1, result=1;
	
	cout << "請輸入階乘數:" <<endl;
	cin >> n;
	
	do{
		result*=count;
		count++;
	}while(count<=n);
	cout << "答案:\n" << result <<endl;
	
	return 0;
}