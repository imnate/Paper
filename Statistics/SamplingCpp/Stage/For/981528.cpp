///981528 hw2

#include<iostream>
using namespace std;
int main()
{
    /////////for loop
    int m,sum1=1;
    cout<<"請輸入階乘數:"<<endl;
    cin>>m;
    for(int i=1;i<=m;i++)
    sum1*=i;
    cout<<"答案:\n"<<sum1<<endl;
    
    return 0;
}
