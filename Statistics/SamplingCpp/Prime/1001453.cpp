#include <iostream>
using namespace std;

int Prime(int);

int main()
{
	int Number;
	cout<<"Please input a number:" ;
	cin>>Number;
	cout<<"Primes less than "<<Number<<" are ";

	for(int i=2;i<Number;i++)
	{ 
		if(Prime(i))
			cout<<i<<" "; 
	} 
	cout<<endl;

	system("pause");
	return 0;
}

int Prime(int number)
{   
	for(int i=2 ; i <= number-1 ; i++)
	{
		if(number % i == 0)
		{ 
			return 0;
		} 
	}    
	return 1;
}
