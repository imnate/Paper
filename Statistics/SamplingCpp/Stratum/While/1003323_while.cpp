#include<iostream>
using namespace std;
int main()
{
	int input,ans;
		ans = 1;

	cout << "請輸入階乘數:" << endl;
	cin >> input;
	while(input >= 1)
	{
		ans = ans * input;
		input--;
	};
	cout << "答案:" << endl << ans << endl;
	
system("pause");
return 0;
}