#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int num;
    
    cout << "½Ð¿é¤J¼Æ¦r\n";
    cin >> num;
    
    for(i=2; i<num; i++){
for(j=2; j<=i; j++){
  if(i%j == 0)
  break;
  }
  if(i==j)
  cout << j << "\t"; 
  }
    
  system("pause");
  return 0;
  }