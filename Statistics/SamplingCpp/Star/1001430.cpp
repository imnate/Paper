#include<iostream>
using namespace std;
int main()
{
cout<<"Enter a integer:"<<endl;
int number;
int i;
int j;
cin>>number;

for(j=0;j<number;j++)
{
	
   for(i=number;i>j;i--)
      {
	   cout<<"*";
      }
 cout<<endl;
}
system("pause");
return 0;
}