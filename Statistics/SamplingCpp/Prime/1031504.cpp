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
            bool check = true; //�ΨӧP�_�ܼ�prime�O�_�����

            for (int i = 2; i < prime; i ++)
            {
                if (prime % i == 0) //�Yprime��Q�p��ۤv���Ʀr�㰣,�h���O���
                {
                    check = false;  
                    break;
                }
            }

            if (check) //check=true ���prime�O�p��number�����
            {
		     cout<<prime << " ";
            }
	}

	cout<<endl;

    system ("pause");
    return 0;
}