#include <iostream>

using namespace std;

int main()

{
    int y ;
    cout<<"Checking whether a year is leap year or not. Please input a year:  " ;
    cin>>y;

    if((y%4==0&&y%100!=0)||(y%400==0))
    {cout<<"Year "<<y<<" is a leap year"<< endl;
    }
    else
    {cout<<"Year "<<y<<" is not a leap year"<< endl ;

    }

	system("pause") ;
    return 0 ;
}