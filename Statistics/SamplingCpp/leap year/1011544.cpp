

#include <iostream>

using namespace std;

int main()
{

int years;

	cout<<"您可以輸入要判斷的年份\n";

	cin >> years;

	if (years>0)
	{
		if( years%4==0 && years%100!=0 || years%400==0)
		{
			cout<<"這個年代即是閏年\n";
		}
		else
		{
			cout<<"這個年代不是閏年\n";
		}
	}
	else
	{
		cout<<"你所輸入的不是一個年份"<<endl;
	}

	system("pause");
	
	return 0;
}
