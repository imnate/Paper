#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int n;
	int i,j;

	cout << "Enter a integer:\n";
	cin >> n;

	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
		cout <<"*";	
		}
		
		
	cout <<endl;
	
	
	}
	system("pause");
	return 0;

	

}