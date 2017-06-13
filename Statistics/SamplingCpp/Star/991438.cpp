#include<iostream>
using namespace std;
int main()
{	
	cout << "請輸入一數字N: "<< endl;
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
