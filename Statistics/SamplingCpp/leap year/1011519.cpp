#include <iostream>
using namespace std;

int main()
{
 int n;
 char chose;
 do
 {
	cout<<"Please input a integer :";
	cin >> n;
	if(n%400==0)
		cout<<"The year is the leap year!!\n";
	else if(n%4==0 && n%100!=0)
			 cout<<"The year is the leap year!!\n";
		 else
			 cout<<"The year is not the leap year!!\n";
	cout<<"Want to continue?<y/n>";
	cin>> chose;
 }while(chose =='y');
 system("pause");
 return 0;
}