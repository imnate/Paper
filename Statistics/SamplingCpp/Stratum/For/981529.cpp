#include<iostream>
using namespace std;

int main()
{
	//for
	cout<<"�п�J������:"<<endl;

	int number,total=1;			//�]���ܼ�
	cin>>number;				//�ШϥΪ̿�J�Ʀr

	for (int i=number ; i>=1 ; i--)		//��for�j��ۭ�
	{
		total *= i;
	}

	cout<<"����:"<<endl;		
	cout<<total<<endl;


	return 0;
}