#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter a integer";
	cin>>n;
	cout<<endl;

	
	int num1,num2; //�ŧi�ܼ�

		for (num1=1;num1<=n;num1++)

		{
			for (num2=num1;num2<=n;num2++)  //��*�ѤW�ܤU����
			{
				cout << "*"; //�L�X*
			}
		cout << endl; //�C�浲������
		}



	system("pause");
	return 0;
}