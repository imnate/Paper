#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Please input an integer: \n";
    cin >> n;
    if (n > 2) cout << "2" << endl;
    for (int i = 3; i < n; i++) {
		bool suc = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) suc = false;
		}
		if (suc) cout << i << endl;
    }
    system("pause");
    return 0;
}