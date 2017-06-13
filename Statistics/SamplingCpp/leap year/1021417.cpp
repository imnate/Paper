//leap year
#include <iostream>

using namespace std;

int main()

{
      int n = 0;
	  bool t = false;
	  cout<<"Checking whether a year is leap year or not.";
      cout<<"input a year: ";

      cin >> n ;

      if(( n % 4 == 0 && n % 100 != 0))
		  t = true;
	  if( n % 400 == 0)
		  t = true;

	  if(t)
             cout<< n <<" "<<"is a leap year."<<"\n";
	  else
             cout<< n <<" "<<"is not a leap year."<<"\n";

	  system("pause");
	  return 0;
}