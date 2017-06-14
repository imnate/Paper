#include <iostream>

using namespace std;

int main()
{
	int number = 1 ;
	int x;

	cout << "請輸入階乘數:"<< endl;
	cin >> x;

	for(int i = 1; i <= x; i++)
	{
		number=number*i;


	}
	cout << "答案:" <<endl << number << endl;

	system("pause");
	return 0;
}