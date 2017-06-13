#include<iostream>
using namespace std;
int main(){
	int input2,tmp=1;
	cin>>input2;
	while(input2>0){
		tmp*=input2;
		input2--;
		}
		cout<<tmp<<endl;
		
	system("pause");
	return 0;
	}
