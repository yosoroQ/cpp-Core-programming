#include<iostream>
using namespace std;

//����ĳ�ʼ��������-��ʼ���б�
//���ã�C++�ṩ�˳�ʼ���б��﷨��������ʼ������

//�﷨�����캯��()������1(ֵ1),����2��ֵ2��... {}

class Person
{
public:
	
	//��ʼ���б�ʽ��ʼ��
	Person(int a, int b, int c):m_A(a),m_B(b),m_C(c)
	{}
		void PrintPerson()
		{
		cout << "mA:" << m_A << endl;
		cout << "mB:" << m_B << endl;
		cout << "mC:" << m_C << endl;
		}
		
private:
    int m_A;
    int m_B;
    int m_C;

};


int main() {

   	Person p(65,8,7);   
   	p.PrintPerson();

	system("pause");

	return 0;
}
