#include<iostream>
using namespace std;

//����   ע������
//���ñ����ʼ��
//�����ڳ�ʼ���󣬲����Ըı�

int main() {
    
    int a=10;
    int &b=a;
    //int &c;//�������ñ����ʼ�� 
    int &c=a; //һ����ʼ���󣬾Ͳ����Ը���
    c=b;  //���Ǹ�ֵ���������Ǹ�������
    
    cout<<"a= "<<a<<endl;  
	cout<<"b= "<<b<<endl;
	cout<<"c= "<<c<<endl;
	
	system("pause");

	return 0;
}
