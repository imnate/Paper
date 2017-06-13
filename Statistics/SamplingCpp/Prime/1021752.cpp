#include<iostream>
using namespace std;

int main()
{
	int n,i,j,a;
	cout<<"Please input an integer for listing all the primes less than the integer:";
	cin >> n;
	if(n<=1)
	{
		do{
			cout<<"Please input an integer for listing all the primes less than the integer:";
	        cin >> n;
		}while(n<=1);
	}

	cout << "Primes less than "<< n <<" are :";

	for(i=1;i<n;i++)
	{
		int m=0;
		for(j=2;j<=i;j++)
		{
			a=i%j;
			if(a==0)
				m=m+1;
		}
		if(m==1)
			cout<< i << " ";
	}

	system("pause");
	return 0;
}

