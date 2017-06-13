#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ()
{int n;
    cout<< "Enter an integer:\n";
    cin>>n;
    for (int i=0; i<n; i++)
    {
        for (int j=n; j>i; j--)
        cout<< "*";
        cout<< endl;
    }
    
    system ("pause");
    return 0;
}




          
