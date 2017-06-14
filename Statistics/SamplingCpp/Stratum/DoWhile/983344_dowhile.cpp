#include<iostream>
using namespace::std;


int gg(int h)
{
int ans2=1;

do{
	ans2=ans2*h;
h--;


}while(h>1);

return ans2;



}


int main()
{
int a,b,c;


cout<<"請輸入階乘數:"<<endl;
cin>>c;
cout<<"答案:"<<endl;
cout<<gg(c)<<endl;









}