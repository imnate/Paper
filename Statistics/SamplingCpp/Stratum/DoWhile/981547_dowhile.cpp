#include<iostream>
using namespace::std;

int main()

{
    int number;
    int answer = 1;

    cout<<"請輸入階層數:\n";
    cin>>number;
      do 
    {
         answer = answer * number;
         number--;
    }    
    while(number>0);
    
    
    cout<<"答案:\n";
    cout<<answer<<endl;//do while part 
    system("pause");
    return 0;
    
}