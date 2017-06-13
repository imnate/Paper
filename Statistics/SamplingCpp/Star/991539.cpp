//991539_hw1
//Asterisk triangle
#include<iostream>
using namespace std;

int main()
{

	int input;//給使用者選擇三角型大小

	cout<<"請輸入一個數字來決定三角型大小："<<endl;//顯示於螢幕告知使用者
	cin>>input;

	//兩層for迴圈能形成input*input大小的矩形
	for( int i=0 ; i<input ; i++ )
	{
		for( int j=0 ; j< input ; j++ )
		{
			if(i+j>=input)	//當(i,j)的i+j位置大於使用者輸入即輸出空白
				cout<<" ";
			else
				cout<<"*";	//其他則輸出星號

			if(j==input-1)	//排板換行
			cout<<endl;
		}
	}

	system("pause");	//設置停損點
	return 0;			//正當結束funtion
}

//助教不好意思,我是利用數位實驗課剩餘時間打的程式,今天點開才發現忘記打註解...