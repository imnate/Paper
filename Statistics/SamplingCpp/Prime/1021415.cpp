#include<iostream>
#include<vector>

using namespace std;
bool isprime(int k);

int main()//��X�p��Number�����
{
	cout << "Please input an integer for listing all the primes less than the integer:  " ;
	int number;
	cin >> number ;

	vector<int>pri(2);
	int numprime = 0;//numprime = size -1
	pri[0] = 2;
	int j = 3;

	while( j <= number){
		if(isprime(j)){
			numprime = numprime + 1;
			pri.resize(numprime+1);
			pri[numprime] = j; 
		}
		j++;
	}
	
	cout << "Primes less than " << number << " are " ;
	for(int i = 0 ;i <= numprime ; i++){
		cout << pri[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

bool isprime(int k)//�P�_�p��pri��k�O�_�����
{
	int i = 2 ;
 
	while(i<k){
		if((k%i)==0){
			break;
		}
		i++;
	}
		
	if(k==i)
		return true;
	else
		return false;
}