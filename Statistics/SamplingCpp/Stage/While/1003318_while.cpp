#include<iostream>
using namespace std;

int main()
{
	int n;
	int ans1=1;
	int ans2=1;
	int ans3=1;
	int k=1;
	int a=1;
	int q=1;
	cout << "請輸入階層數:" << endl;
	cin >> n;
	cout << "答案:" << endl;
	while(k<=n)
	{
		ans2=ans2*k;
		k++;
	}
	cout << ans2;
	cout << endl;
	
system("pause");
return 0;
}