#include<iostream>
using namespace std;

//����   ���õı��� 
//���õı�����c++�ڲ�ʵ����һ��ָ�볣��.
/*C++�Ƽ������ü�������Ϊ�﷨���㣬
���ñ�����ָ�볣�����������е�ָ�����������������������*/ 

//���������ã�ת��Ϊ int* const ref = &a;
void func(int& ref)
{
	ref=100;  // ref�����ã�ת��Ϊ*ref = 100
}

int main() {
	
	int a=100;
	/*�Զ�ת��Ϊ int* const ref = &a;
	 ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���*/
	int& ref=a;
	
	//�ڲ�����ref�����ã��Զ�������ת��Ϊ: *ref = 900;
	ref=900;
	
	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	system("pause");
	return 0;
}
