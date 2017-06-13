#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int s=1;
	cout<<"輸入階程數"<<endl;
	cin>>n;
	i=n;
	while(i>0)
	{
		s=s*i;
		i--;
	}
	cout<<"答案"<<endl<<s<<endl;
	system("pause");
	return 0;
}