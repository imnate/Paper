#include<iostream>      //allow program to output data to the screan
using namespace std;    //program uses names from the std namespace 

//function  main begins program execution 
int main()
{
    int n;     //integer to multiply
    
    cout<<"Checking whether a year is leap year or not. Please input a year: ";  //���ù��X�{ ��J�@�Ӧ~�� 
    cin>>n;        //��J�~�� 
    
    if(n%400==0)                      //���p�~���O400������ 
    cout<<"Year "<<n<<" is a leap year."<<endl;  //���ù��X�{ �~���O�|�~ 
    else if(n%4==0 && n%100!=0)    //���p�~���O�|�����Ʀ����O�@�ʪ����� 
    cout<<"Year "<<n<<" is a leap year."<<endl;  //���ù��X�{ �~���O�|�~  
    else                                   //�_�h 
    cout<<"Year "<<n<<" is not a leap year."<<endl;//���ù��X�{ �~���O���~ 
    
    system("pause");                 //����e�� 
    return 0;
}

//�o�O���ǰ��D ����400�ӹL�o
//�L�o�����A�ϥ� year ��4 ����0  �åB year ��100 ������0 �ӧP�_�O�_�Oleap year(�|�~)
//�̫�@��else �]�N�O ���Ǥ��Oleap year(�|�~) ���~���F
//���ǴN�Ocommon year (���`�~��) 
//1011529 �i�ͳ� 
