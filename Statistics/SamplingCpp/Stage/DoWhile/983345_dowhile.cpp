#include <iostream>
using namespace std;

int main()
{


	cout << "\n請輸入階乘數:" << endl;
	int n2;
	cin >> n2;
	cout << "答案:" << endl;
	int ans2 = 1;
	int k = 1;

	do{
		ans2 *= k;
		k++;
	} while ( k <= n2 );
	cout << ans2 << endl;

	
return 0;
}