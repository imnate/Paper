#include <iostream>

int a;
using std::endl;
using std :: endl ;
int main()
{
	std::cout<<"Checking whether a year is leap year or not. Please input a year"<< a << endl;

	std::cin>>a;
		if (a % 4000==0)
		{
			std::cout <<  a << "is not a leap year" << endl;
		}
		else  if(a % 400 ==0)
		{
			std::cout << a << "is  a leap year" << endl;
		}
		else  if (a % 100==0)
		{
			std::cout << a << "is not a leap year" << endl;
		}
		else  if (a % 4==0)
		{
			std::cout << a << "is  a leap year" << endl;
		}
		else  if (a % 4!=0)
		{
			std::cout << a << "is not a leap year" << endl;
		}
			system("pause");
			return 0;
}
			


