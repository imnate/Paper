#include<iostream>
using namespace std;
int main()
{
	int aa;
	cout<<"�п�J�Ʀr:"<<endl;
	cin>>aa;
	for(int a=aa;a>=0;a--)
	{
		for(int b=0;b<a;b++)
			cout<<"*";
		cout<<endl;
	}
	system("pause");
	return 0;
}