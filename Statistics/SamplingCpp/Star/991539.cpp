//991539_hw1
//Asterisk triangle
#include<iostream>
using namespace std;

int main()
{

	int input;//���ϥΪ̿�ܤT�����j�p

	cout<<"�п�J�@�ӼƦr�ӨM�w�T�����j�p�G"<<endl;//��ܩ�ù��i���ϥΪ�
	cin>>input;

	//��hfor�j���Φ�input*input�j�p���x��
	for( int i=0 ; i<input ; i++ )
	{
		for( int j=0 ; j< input ; j++ )
		{
			if(i+j>=input)	//��(i,j)��i+j��m�j��ϥΪ̿�J�Y��X�ť�
				cout<<" ";
			else
				cout<<"*";	//��L�h��X�P��

			if(j==input-1)	//�ƪO����
			cout<<endl;
		}
	}

	system("pause");	//�]�m���l�I
	return 0;			//������funtion
}

//�U�Ф��n�N��,�ڬO�Q�μƦ����ҳѾl�ɶ������{��,�����I�}�~�o�{�ѰO������...