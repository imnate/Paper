#include<iostream>
using namespace std;

int main()
{
	int i;
	int sum=1;

	cout<<"請輸入階乘數:"<<endl;
	cin>>i;
	
		
	do	
	{
		sum=sum*i;
		i--;
	}while(i>=1);
	
	cout<<"答案:"<<endl<<sum<<endl;
    
    system("pause");

	return 0;


}