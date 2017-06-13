#include<iostream>
using namespace std;
int main()
{
	int n ;
	cout << "Enter a integer:";
	cin >> n;
	cout << n<<endl;
	for(int b = n ; b>=1 ; b--)
	{
		for(int a = 1 ; a<=b; a++)
		{
			cout << "*";
		}
		cout <<endl;
	}
	system("pause");
}