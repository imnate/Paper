#include <iostream>
using namespace std;


int d(int n){
	int i=1;
	int t=1;
	
	do{
		t=t*i;
		i++;
	}while(i<=n);

	return t;
}


void main()
{
	int i=1;
	int n;
	int t=1;

	cout<<"請輸入階乘數:"<<endl;
	cin>>n;
    cout<<"答案:"<<endl;
	cout<<d(n)<<endl;

	system("pause");

}
