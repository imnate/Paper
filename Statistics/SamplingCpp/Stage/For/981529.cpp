#include<iostream>
using namespace std;

int main()
{
	//for
	cout<<"請輸入階乘數:"<<endl;

	int number,total=1;			//設立變數
	cin>>number;				//請使用者輸入數字

	for (int i=number ; i>=1 ; i--)		//用for迴圈自乘
	{
		total *= i;
	}

	cout<<"答案:"<<endl;		
	cout<<total<<endl;


	return 0;
}