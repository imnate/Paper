#include <iostream>
using namespace std;

int main()          
{                                        
    int num;
	cin>>num;

    for(int c=1;c<=num;c++)
    {
          for(int d=num;d>=c;d--)
          {
          cout<<"*";
          }
    cout<<endl;
    }     


	system("pause");
	return 0;

}