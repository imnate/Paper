#include<iostream>
using namespace std;
int main()
{


	int sum3=1,input3,y=1;//用do while寫的階層 
	cout << "請輸入階乘數:" << endl;
	cin >> input3;
	do
	{
		sum3*=y;
		y++;
	}
	while(y<=input3);
	cout << "答案:" << endl << sum3 << endl;

	
	return 0;
	}