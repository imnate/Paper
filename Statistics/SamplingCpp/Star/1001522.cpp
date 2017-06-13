#include<iostream>
using namespace std;

int main()
{
	
	int num;

	cout << "Enter a integer:" << endl;
	cin >> num;


	for(int i=num ; i>0 ; i--)//°j°é
	{	
		for(int j=num ; j>0 ; j--)
		{
			cout << "*" ; 
		}

		num--;
		cout << endl;
	
	}

	



system("PAUSE");
return 0;
}