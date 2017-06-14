//981535 張育綸

#include<iostream>
using namespace std;
int main()
{
	/*各種迴圈的階層數*/
	int n_for=0;
	int n_while=0;
	int n_dowhile=0;
	
	/*各迴圈執行後的結果*/
	int result_for=1;
	int result_while=1;
	int result_dowhile=1;

	/*FOR迴圈*/
	cout<<"請輸入階乘數:"<<endl;
	cin>>n_for;
	for(int i=1;i<=n_for;i++)
		result_for=result_for*i;//1*1-->1*2-->2*3-->6*4-->24*5.......
	cout<<"答案:"<<endl<<result_for<<endl;

	system("pause");
	return 0;
}