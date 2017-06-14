#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	int total = 1,total2 = 1,total3 = 1;
		cout<<"請輸入階乘數:"<<endl;
	cin>>n2;	
	int i=1;
	while(i<=n2)
	{
		
		total2*=i;	
		i++;
	}
	cout<<"答案:"<<endl;
	cout<<total2<<endl;

		system("pause");
	return 0;
}