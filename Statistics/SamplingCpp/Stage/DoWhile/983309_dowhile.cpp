#include<iostream>

using namespace std;

int main()
{
	int i,j,n;

	cout<<"請輸入階乘數:"<<endl;
	cin>>n;
i=1;
	j=n;
	do
	{
		n=n*(j-i);
		i++;
	}
	while(i<j);
		
	cout<<"答案:"<<endl<<n<<endl;

	system("pause");
	return 0;
}