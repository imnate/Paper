#include <iostream>

using namespace std;

int main()
{
	//while
	int num1,tmp1=1,j=1;

	cout << "請輸入階乘數:\n";
	cin >> num1;

	while (j<=num1)
	{
		tmp1*=j;
		
		if(j==num1)
		{
			cout << "答案:\n" << tmp1 << endl;
			break;
		}
		j++;
	}
	

	system ("pause");
	return 0;
}