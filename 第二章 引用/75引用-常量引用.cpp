#include<iostream>
using namespace std;

//����   �������� 
//����������Ҫ���������βΣ���ֹ�����
//�ں����β��б��У����Լ�const�����βΣ���ֹ�βθı�ʵ��
 
//����ʹ�õĳ�����ͨ�����������β�
void showValue(const int &v)
{
	cout<<v<<endl;
}

int main() {
	
	//int& ref = 10;  ���ñ�����Ҫһ���Ϸ����ڴ�ռ䣬������д���
	//����const�Ϳ����ˣ��������Ż����룬int temp = 10; const int& ref = temp;
    const int& ref=900;
    //ref = 100;  //����const�󲻿����޸ı���
    cout<<ref<<endl;
    
    //���������ó������÷�ֹ������޸�ʵ��
    int a=10;
    showValue(a);
    
	system("pause");
	return 0;
}
