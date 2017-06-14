#include <iostream>
using namespace std;
int main()
{
	int n,n1,n2;
	int i=1;
	int sum=1;
	int sum2=1;
	int sum3=1;

			cout<<"請輸入階乘數: ";
		cout<<endl;
		cin>>n1;
		sum2=n1;

	while(n1>1)
	{
		n1-=1;
		sum2*=n1;
		
	}
		cout<<"答案: "<<endl;
		cout<<sum2<<endl;



system("pause");
return 0;

}