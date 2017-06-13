#include <iostream>
using namespace std;
int main()
{
	int num;   //while迴圈的條件
	int y=1;    //while迴圈的條件
	int i=1;    //while迴圈的條件
	cout<<"請輸入一個階層數:"<<endl;
	cin>>num;
	while(i<num)
	    {
			y=y*(i+1);
			i++;
     	}
	        cout<<"答案:"<<endl;
			cout<<y<<endl;
			
   	system("pause");
	return 0;
}
