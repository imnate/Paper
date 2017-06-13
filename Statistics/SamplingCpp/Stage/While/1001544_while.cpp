#include <iostream>
using namespace std;

int main()
{
	int integer;
	int sum=1;
	int i=1;

	//while
	sum=1;
	i=1;
	cout<<"請輸入階乘數:"<<endl;
	cin>>integer;

	while(i<=integer)
	{
		sum=sum*i;	
		i++;
	}
	cout<<"答案:"<<endl<<sum<<endl;



	system("pause");
	return 0;
}