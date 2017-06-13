#include<iostream>
using namespace std;

int main()
{
	int a,temp=0;
	cout << "Please input an integer for listing all the primes less than the integer:";
	cin >> a;
	cout << "Primes less than "<< a <<" are ";
	for(int x=2;x<a;x++)
		{
			for(int y=1;y<=x;y++)
				{
					if(x%y==0)
						temp++;
				}
			if(temp==2)
				cout << x <<" ";
			temp=0;
		}



	system("pause");
	return 0;
}