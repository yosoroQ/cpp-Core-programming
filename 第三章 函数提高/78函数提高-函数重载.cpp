#include<iostream>
using namespace std;

//�������-��������
//���ã�������������ͬ����߸�����
/*������������������
 ͬһ����������
 ����������ͬ
�����������Ͳ�ͬ���� ������ͬ���� ˳��ͬ
*/
//ע��:�����ķ���ֵ��������Ϊ�������ص����� 


//����������Ҫ��������ͬһ����������
void func()
{
	cout << "����func�ĵ���" << endl;
}

void func(int a)
{
	cout << "����func(int a)�ĵ���" << endl;
}

void func(double a)
{
	cout << "����func(double a)�ĵ���" << endl;
}

void func(int a, double b)
{
	cout << "����func(int a double b)�ĵ���" << endl;
}

void func(double a ,  int b)
{
	cout << "����func(double a ,  int b)�ĵ���" << endl;
}

//��������ֵ��������Ϊ������������
//int func(double a, int b)
//{
//	cout << "func (double a ,int b)�ĵ��ã�" << endl;
//}

int main() {

	func();
	func(50);
	func(3.14);
	func(50, 3.14);
	func(3.14, 50);


	system("pause");
	return 0;
}
