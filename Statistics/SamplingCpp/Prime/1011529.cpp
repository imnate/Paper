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
           int child=0;        //to store 计计 
           for(int k=1; k<=i ;k++)
           {       
                   
                   if(i%k==0) //俱埃 
                   child++;   //计计+1 
                   if(child>2)//禬筁2计 铬 
                   break;
           }    
           if(child==2)  
           cout<<i<<" "; //计计Τㄢ计 
    }
    cout<<endl;
    
    system ("pause");
    return 0;      
    
    
}