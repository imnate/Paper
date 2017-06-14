#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3,ans = 1;
	
	cout << "請輸入階乘數:" << endl;
	cin >> num2;
	int j = 0;
	while(j != num2 )
	{
		j = j+1;
		ans = ans * j;
	}
	cout << "答案:" << endl << ans << endl;
		system("pause");
	return 0;
}