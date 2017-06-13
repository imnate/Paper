#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int number,total=1,i=1;
    cin>>number;
     while(i<=number)
     {
     total*=i;
     i++;
     }
     cout<<total;
system("pause");
return 0;
}
