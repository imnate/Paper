#include <iostream>
using namespace std;
int main()
{
    int num;
   
    
    
    cout<<"Please input an integer for listing all the primes less than the integer: ";
    cin>>num;
    cout<<"Primes less than "<<num<<" are ";
    
    for(int i=1; i<num ;i++)  //use double loop to check nums under num
    {      
           int child=0;        //to store �]�ƭӼ� 
           for(int k=1; k<=i ;k++)
           {       
                   
                   if(i%k==0) //�㰣 
                   child++;   //�]�ƭӼ�+1 
                   if(child>2)//�W�L2�Ӧ]�� ���X 
                   break;
           }    
           if(child==2)  
           cout<<i<<" "; //�L�X�]�ƭӼƥu����Ӫ��Ʀr 
    }
    cout<<endl;
    
    system ("pause");
    return 0;      
    
    
}