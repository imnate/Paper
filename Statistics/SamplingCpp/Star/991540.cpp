//991540 hw1
//寫一個程式來讀取使用者輸入的一個整數n，然後產生一個用兩個邊都由n個星號(*)組成的三角形。
#include<iostream>
using namespace std;

int main()
{
	int num;//設遇輸入的變數名稱為num
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
			cout <<endl;//換行
		}
	}
	system("pause");
	return 0;
}