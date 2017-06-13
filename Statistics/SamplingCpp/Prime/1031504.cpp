#include <iostream>
using namespace std;

int main()
{
    int number;
    
    cout << "Please input an integer for listing all the primes less than the integer: ";
	cin>>number;

	cout<<"Primes less than "<<number<<" are ";
    
    for (int prime=2; prime <number; prime++) 
    {
            bool check = true; //用來判斷變數prime是否為質數

            for (int i = 2; i < prime; i ++)
            {
                if (prime % i == 0) //若prime能被小於自己的數字整除,則不是質數
                {
                    check = false;  
                    break;
                }
            }

            if (check) //check=true 表示prime是小於number的質數
            {
		     cout<<prime << " ";
            }
	}

	cout<<endl;

    system ("pause");
    return 0;
}