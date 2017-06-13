#include<iostream>
using namespace std;

int number,a,b;
int main()
{
	cout <<"Please input an integer for listing all the primes less than the integer:";
	cin >> number;
	cout <<endl;

	
	if(number > 2)
		cout << "Primes less than"<< " " << number <<" "<< "are" << " ";
		cout << "2" << " ";
	for(a=1 ; a<number ; a++)
	{
		for(b=2 ; b<=a ; b++)
		{
			if(a%b==0)
				break;
			else if (a==b+1)
				cout << a << " " ;
		}
	}
	if(number<=2)
		cout << "You write the wrong number";
		system("pause");
}