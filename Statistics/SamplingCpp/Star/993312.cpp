#include <iostream>
using namespace std;

int main()
{
    int n=0;
    cout <<"�п�J�@�ӥ����:";
    cin >> n;
    
    for (int i=0;i<=n;i++)
    {
        for (int j=5;j>i;j--)
        {
            cout <<"*";
        }
        cout <<endl;
    }
    
    system ("pause");
    return 0;
}
                
