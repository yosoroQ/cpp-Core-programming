#include<iostream>
using namespace std;

//�������-����Ĭ�ϲ���
//��C++�У��������β��б��е��β��ǿ�����Ĭ��ֵ�ġ�
//�﷨������ֵ����  ������ ������= Ĭ��ֵ��{}

int func(int a,int b=50, int c=4)
//int func(int a,int b=50, int c) ���� 
//���ĳ��λ�ò�����Ĭ��ֵ����ô�����λ�����󣬴������ң����붼Ҫ��Ĭ��ֵ
{
	return a*b*c;
} 
 
//2. �������������Ĭ��ֵ������ʵ�ֵ�ʱ��Ͳ�����Ĭ�ϲ���
int func2(int a=70,int b=50);
int func2(int a,int b)
{
	return a*b;
}

 

int main() {
	
	cout<<"returnֵΪ�� "<<func(80,50,60)<<endl;
    cout<<"return2ֵΪ�� "<<func2(100)<<endl;
    
	system("pause");
	return 0;
}
