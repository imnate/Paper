//1011521_hw1_5
#include <iostream> //���\�{���ϥ�iostream
using namespace std; //�ϥΫ�cout�Mcin���ݦA�[std::

int main()
{
	int number; //�إߤ@��number�Ŷ�
	cout << "Enter a year: "; //�Ͽù����Enter a year: 
	cin >> number; //��J�@�ӼƦr��Jnumber
	if ( number %4 == 0 )//����@
		if ( number %100 == 0 )//����G
			if ( number %400 == 0 )//����T
				cout << "Year " << number << " is a leap year";
	        else //����T���ѫ�
		        cout << "Year " << number << " is not a leap year";
		else //����G���ѫ�
			cout << "Year " << number << " is a leap year";
	else //����@���ѫ�
		cout << "Year " << number << " is not a leap year";
	
	system("pause"); //�ϵ{���]�����n��������
	return (0);//���ܵ{������Q
} // ����