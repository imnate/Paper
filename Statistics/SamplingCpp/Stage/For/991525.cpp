#include<iostream>
using namespace std;
int main()
{
int a;
cin >> a;
int b=1;
int c=1;
for(;b<=a;b++)
{
	c=c*b;
	cout << c << "  " ;
}

system("pause");
return 0;
}