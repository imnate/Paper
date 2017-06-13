#include <iostream> 
using namespace std;
 
int main()
{
    int number,x,y; 
    while(true)  
    {
        cout << "Please input a number:";
        cin >> number ;
 
        if(number>=2)
        {
            cout<<"小於此數字的質數有:"  ; 
            if (number>=2) 
            cout << "2" << " ";
            for(x=1;x<=number;x++) 
            {
                for(y=2;y<=x;y++) 
               {
                   if(x%y==0) 
                    break; 
                   else if (x==y+1) 
                    cout << x << " "; 
               }
            }
        }

        cout << endl ; 
    }
   
	system ("pause");
    return 0;
}



