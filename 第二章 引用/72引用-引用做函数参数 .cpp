#include<iostream>
using namespace std;

//����   ��������������
//��������ʱ�������������õļ������β�����ʵ��
//�ŵ㣺���Լ�ָ���޸�ʵ��

//���ô���
void my03(int&a,int&b)
{
	int temp=a;
	a=b;
	b=temp;
} 

int main() {
    
    //ͨ�����ò���������Ч��ͬ��ַ������һ���ġ����õ��﷨�������
    int a=10;
    int b=200;
    
    my03(a,b);
    cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl; //���a,b�������� �β�����ʵ��
	
	system("pause");
	return 0;
}
