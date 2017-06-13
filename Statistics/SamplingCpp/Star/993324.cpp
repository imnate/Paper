#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter a integer";
	cin>>n;
	cout<<endl;

	
	int num1,num2; //宣告變數

		for (num1=1;num1<=n;num1++)

		{
			for (num2=num1;num2<=n;num2++)  //使*由上至下遞減
			{
				cout << "*"; //印出*
			}
		cout << endl; //每行結尾換行
		}



	system("pause");
	return 0;
}