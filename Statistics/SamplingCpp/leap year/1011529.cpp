#include<iostream>      //allow program to output data to the screan
using namespace std;    //program uses names from the std namespace 

//function  main begins program execution 
int main()
{
    int n;     //integer to multiply
    
    cout<<"Checking whether a year is leap year or not. Please input a year: ";  //讓螢幕出現 輸入一個年份 
    cin>>n;        //輸入年分 
    
    if(n%400==0)                      //假如年份是400的倍數 
    cout<<"Year "<<n<<" is a leap year."<<endl;  //讓螢幕出現 年份是閏年 
    else if(n%4==0 && n%100!=0)    //假如年分是四的倍數但不是一百的倍數 
    cout<<"Year "<<n<<" is a leap year."<<endl;  //讓螢幕出現 年份是閏年  
    else                                   //否則 
    cout<<"Year "<<n<<" is not a leap year."<<endl;//讓螢幕出現 年份是平年 
    
    system("pause");                 //停住畫面 
    return 0;
}

//這是順序問題 先用400來過濾
//過濾完成再使用 year 除4 等於0  並且 year 除100 不等於0 來判斷是否是leap year(閏年)
//最後一個else 也就是 那些不是leap year(閏年) 的年份了
//那些就是common year (平常年分) 
//1011529 張凱勝 
