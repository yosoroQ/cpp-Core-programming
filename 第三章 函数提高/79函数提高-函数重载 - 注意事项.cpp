#include<iostream>
using namespace std;

//�������-��������
//ע������

//1��������Ϊ��������
void func(int &a)
{
	cout << "����func(int a)�ĵ���" << endl;
}

void func(const int &a)
{
	cout << "����func(const int &a)�ĵ���" << endl;
}

//2������������������Ĭ�ϲ���
void func2(int a,int b=50)
{
	cout << "����func(int a,int b=50)�ĵ���" << endl;
}

void func2(int a)
{
	cout << "����func(int a)�ĵ���" << endl;
}

int main() {
    
    int a=10;
	func(a);  //������const 
	func(10);  //������const
	
    //func2(21);  ����Ĭ�ϲ����������壬��Ҫ����

	system("pause");
	return 0;
}
