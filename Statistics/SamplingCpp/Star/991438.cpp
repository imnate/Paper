#include<iostream>
using namespace std;
int main()
{	
	cout << "�п�J�@�ƦrN: "<< endl;
	 int n;
	cin >> n; 
     for(int j = 1 ; j <= n ; j ++)
     {
         for(int i = n ; i >= j ; i --)
         {
             cout << "*";
          }             
             cout << endl;
     }
	system("pause");
	return 0;
}
