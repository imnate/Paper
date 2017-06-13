#include<iostream>
using namespace std;

int main()
{


	int num2,ans2=1,j=1;
	
	cout<<"請輸入階乘數:"<<endl;
	cin>>num2;
	do
	{
		ans2=j*ans2;
		j++;
	}while(j<=num2);
	cout << "答案:" << endl << ans2<<endl;


	system("pause");
	return 0;
}