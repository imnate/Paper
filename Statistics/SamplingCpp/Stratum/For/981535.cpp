//981535 �i�|��

#include<iostream>
using namespace std;
int main()
{
	/*�U�ذj�骺���h��*/
	int n_for=0;
	int n_while=0;
	int n_dowhile=0;
	
	/*�U�j�����᪺���G*/
	int result_for=1;
	int result_while=1;
	int result_dowhile=1;

	/*FOR�j��*/
	cout<<"�п�J������:"<<endl;
	cin>>n_for;
	for(int i=1;i<=n_for;i++)
		result_for=result_for*i;//1*1-->1*2-->2*3-->6*4-->24*5.......
	cout<<"����:"<<endl<<result_for<<endl;

	system("pause");
	return 0;
}