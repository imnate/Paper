#include<iostream>
using namespace std;
int main()
{
int number = 0 ;
cout << "Enter a integer:" << endl ;
cin >> number;

for (int i = number ; i >= 0 ; i--){
for (int j = 0 ; j <= number ; j++){
cout << "*";
}
number--;
cout << endl;
}

system ("pause");
return 0;
}