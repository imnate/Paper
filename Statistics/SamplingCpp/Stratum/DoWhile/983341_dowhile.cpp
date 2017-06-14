//983341 謝委霖	2010/04/14
#include <iostream>
using namespace std;

int main()
{
	int number=0,ans1=1,ans2=1,ans3=1,x=1,y=1,z=1;
	
	//do while迴圈
	cout << "請輸入階乘數:" <<endl;
	cin >> number;
	cout << "答案:" <<endl;
	do
	{
		ans3=ans3*z;
		z++;
	}
	while (z<=number);
	cout << ans3 <<endl;
	
	return 0;
}