//�����~�ƳQ4���ɪ��O�|�~�A���p�Q100���o�ɦӳQ400�����ɪ��h���O�|�~�Cex:1900 is not a leap year.2000 is a leap year.
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Checking whether a year is leap year or not. Please input a year:"<<endl;
	cin>>n;

	
    if( ( n % 4 == 0 ) && ( n % 100 != 0 ) )
		cout << n << " is  a leap year." << endl;

	else if  ( n % 400 == 0 )
		cout << n << " is  a leap year." << endl;

	else
		cout << n << "  is  not a leap year." << endl;
 
	system("pause");
    return 0;
}
