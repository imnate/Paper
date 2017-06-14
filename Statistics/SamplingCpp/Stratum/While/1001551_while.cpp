#include<iostream>
using namespace std;
int main()
{

	cout<<"請輸入階層數："<<endl;
	int num2;
	cin>>num2;
	cout<<"答案："<<endl;
	int y=1;
	while(num2>=1)
	{
		y=y*num2;
		num2--;
	}
	cout<<y;
	cout<<endl;

	cout<<endl;

	system("pause");
	return 0;
}