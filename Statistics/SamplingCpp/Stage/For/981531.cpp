#include <iostream>

using namespace std;

int main()
{
    int n;
    int a=1;
    
    cout<<"請輸入階乘數:"<<endl;
    cin>>n;
    for( ;n>=1 ; n-- )
    a=a*n;
    cout<<"答案:"<<endl<<a<<endl;
    

return 0;
}