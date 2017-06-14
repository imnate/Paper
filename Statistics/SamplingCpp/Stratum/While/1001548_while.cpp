#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int n;
    int sum=1;
    
	cout<<"請輸入階乘數:"<<endl;
    cin>>n;
	while(n>1)      
    {
		sum*=n;
        n--;
    }
	cout<<"答案:"<<endl<<sum<<endl;
    
    cout<<endl;
    system("PAUSE");
    return 0;
}