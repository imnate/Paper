#include <iostream>
using namespace std;

int main()
{ 
	int year=0;
	
	while(1)
	{
		cout<<"Please input a year: ";
	    cin>>year;

		if(year < 0)
		{
			cout<<"請輸入正整數:";
			cin>>year;
		}

		if((year%4)==0 && (year%100)!=0 || (year%400)==0)
			cout<<year<<" is a leap year!!"<<endl;
		else
			cout<<year<<" is not a leap year!!"<<endl;
	}
	system("pause");
	return 0;
}