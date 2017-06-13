#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int number;
	cout<<"Enter a year: ";
	cin>>number;

if((number%4==0)&&(number%100!=0))
{
	cout<<"YEAR "<<number<<" is a leap year";	
}
if(number%400==0)
{
	cout<<"YEAR "<<number<<" is a leap year";
}
else
cout<<"YEAR "<<number<<" is a common year";
system("pause");

}