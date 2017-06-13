#include <iostream>
#include <cmath>

using namespace std;

int main()
{    
    int i,j,f,num;
    
    cout<<"Please input an integer for listing all the primes less than the integer:"; 
    cin>>num;
	cout << "Primes less than " << num << " are ";

    for(i=2;i<=num;i++)
    {
		f=0;  
        for(j=2;j<i;j++)
        {
			if(i%j==0)
			{
				f=1;
				break;
			}
        }

		if(f==0)
			cout << i << " ";
	}

	cout << endl;

	system ("pause");
	return 0;
}