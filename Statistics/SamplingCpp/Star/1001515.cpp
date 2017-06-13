#include<iostream>
using namespace std;
int main()
{
	int aa;
	cout<<"½Ð¿é¤J¼Æ¦r:"<<endl;
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