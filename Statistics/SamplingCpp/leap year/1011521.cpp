//1011521_hw1_5
#include <iostream> //允許程式使用iostream
using namespace std; //使用後cout和cin不需再加std::

int main()
{
	int number; //建立一個number空間
	cout << "Enter a year: "; //使螢幕顯示Enter a year: 
	cin >> number; //輸入一個數字放入number
	if ( number %4 == 0 )//條件一
		if ( number %100 == 0 )//條件二
			if ( number %400 == 0 )//條件三
				cout << "Year " << number << " is a leap year";
	        else //條件三失敗後
		        cout << "Year " << number << " is not a leap year";
		else //條件二失敗後
			cout << "Year " << number << " is a leap year";
	else //條件一失敗後
		cout << "Year " << number << " is not a leap year";
	
	system("pause"); //使程式跑完不要直接關掉
	return (0);//指示程式停止順利
} // 結束