#include<iostream>
using namespace std;


int DoWhile(int n){
	int i;
	
	i=n-1;

	do{
		n*=i;
		i--;
	}while(i>0);
	return n;
}

void main(){

	int input,input2,input3;


	cout<<"請輸入階乘數:"<<endl;

	cin>>input3;

	cout<<"答案:"<<endl<<DoWhile(input3)<<endl;

}