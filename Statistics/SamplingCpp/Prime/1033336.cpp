//(for version)Primes

#include<iostream>
using namespace std;

int main()
{
int number1,number2,number3,value;
cout<<"enter one number:";
cin>>number1;
cout<<"less than "<< number1 <<" primes :"<<endl;
for(number2=2;number1>=number2;number2++)
{
	value=0;
	for(number3=1;number2>=number3;number3++)
	{   
		if(number2%number3==0)
		value++;
	}
		if(value==2)
		cout<<number2<<endl;
}
system("pause");
return 0;
}