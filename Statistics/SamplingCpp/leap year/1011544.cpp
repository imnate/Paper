

#include <iostream>

using namespace std;

int main()
{

int years;

	cout<<"�z�i�H��J�n�P�_���~��\n";

	cin >> years;

	if (years>0)
	{
		if( years%4==0 && years%100!=0 || years%400==0)
		{
			cout<<"�o�Ӧ~�N�Y�O�|�~\n";
		}
		else
		{
			cout<<"�o�Ӧ~�N���O�|�~\n";
		}
	}
	else
	{
		cout<<"�A�ҿ�J�����O�@�Ӧ~��"<<endl;
	}

	system("pause");
	
	return 0;
}
