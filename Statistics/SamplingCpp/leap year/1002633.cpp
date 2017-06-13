//First Program Leap year.cpp

#include <iostream>
using namespace std;
int main()
{int year;
cout<< "Checking whether a year is leap year or not.";
cout<<"Please input a year:";
 cin >> year ;
   if(year % 400 == 0 )
   {
        cout << year << "is a leap year\n" << endl;
   }else if(year % 4==0 && year % 100!=0)
   {
         cout << year << "is a leap year\n" << endl;
   }else 
	     cout<< year << "is not a leap year\n"<<endl;
        

      
    system("pause");
    return 0;    
}