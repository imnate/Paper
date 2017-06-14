//1003307 蕭世杰
//1.for 2.while 3.do while
#include <iostream>
using namespace std;
void UseWhile(int chose)    //while的function
{
	int ans=1;
	int i=1;
	while (i<chose)
	{
		ans=ans*(i+1);
		i++;
	}
	cout << "答案:" << endl;
	cout << ans << endl;
}
int main()
{
	cout << "請輸入一個整數" << endl;
	int chose2;
	cin >> chose2;
	UseWhile(chose2);
	
	system("pause");
	return 0;
}