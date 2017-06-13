#include<iostream>
using namespace std;

int main()
{
	int integer,a,b,c;
	cout<<"Please input an integer for listing all the primes less than the integer:"<<endl;
	cin >> integer;
	if(integer<=1)
	{

		do{

			cout<<"Please input an integer for listing all the primes less than the integer:  ";
	        cin >> integer;

		}while(integer<=1);
	}


	for(a=1;a<integer;a++)
	{

		int m=0;
		for(b=2;b<=a;b++)
		{

			c=a%b;
			if(c==0)m=m+1;

		}
		
		if(m==1)
		cout<< a << " ";
	}

	system("pause");
	return 0;
}