#include<iostream>
using namespace std;

int main()
{
	int integer,cnt=0;
	cout << "Please input an integer for listing all the primes less than the integer: " << endl;
	cin >> integer;
	for(int i=2;i<integer;i++)
	{
		for(int j=2;j<i;j++)
		{	
			if (i%j==0)
				cnt++;
		}   
			if ( cnt==0)
			cout << i <<" ";

		    cnt=0;
		
	}
	system("pause");
}
