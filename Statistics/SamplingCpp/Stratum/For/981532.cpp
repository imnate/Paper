#include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"請輸入階乘數:"<<endl;
	cin>>num;
	
	for(int i=num;i>1;i--)
	{
		 num=num*(i-1);
	}
	
	cout<<"答案:"<<endl<<num;
    cout<<endl;



	cout<<"請輸入階乘數:"<<endl;
	cin>>num;
	
	cout<<"請輸入階乘數:"<<endl;
	cin>>num;
	t=num;
	
	return 0;
}