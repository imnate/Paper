#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int number;
	cout<<"請輸入階乘數:"<<endl;
	cin>>number;
	
	ans=number;
	do {
		ans = ans*(number-1);
		number--;
	}
	while(number>1);
	cout<<"答案:"<<endl<<ans<<endl;

	
	return 0;
}