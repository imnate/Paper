#include<iostream>

using namespace std;

int main()
{
	int i,ans=1,j=1;

	cout<<"�п�J������:\n";
	cin>> i;

	for(j=1;j<=i;j++)//for�j��
		ans=ans*j;

	cout<<"����:\n";
	cout << ans<<endl;

	system("pause");

	return 0;
}