#include<iostream>
using namespace std;

//����   ����ʹ��
// �����������
//�﷨���������� &���� = ԭ��



int main() {
    
    int a=10;
    int &b=a;
    //���10 
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    
    b=100;
    //�������100 
    cout<<"a= "<<a<<endl;  
	cout<<"b= "<<b<<endl;
	
	system("pause");

	return 0;
}
