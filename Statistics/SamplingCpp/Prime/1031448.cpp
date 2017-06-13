#include<iostream>
using namespace std;
int main()
{
    int number ;
    cout<<"Please input an integer for listing all the primes less than the integer:  ";
	cin>>number;
	cout<<"Primes less than "<<number<<" are "; 
    for (int k=1 ; k<=number ; k++)
	{   

	int decide=0;
	for(int i=2;i<k;i++){
		if(k%i==0)
		{
			decide=1;
			i=k;
		}
	}

	if (decide==0 && k!=1)  
    cout << k << " " ;    

    }

	system("pause");
   return 0;
}
