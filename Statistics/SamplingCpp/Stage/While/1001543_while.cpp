#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i;
    int sum = 1;
    cout <<"請輸入階乘數:\n";
    cin >> i;
     while( i >= 1)          //use while loop
    {
        sum *= i;
        i--;
    }
     cout << "答案:\n" << sum << "\n";
     
    cout << endl;
    system("pause");
    return 0;
}
 