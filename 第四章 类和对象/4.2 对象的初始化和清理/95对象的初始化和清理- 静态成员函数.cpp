#include<iostream>
using namespace std;

//����ĳ�ʼ��������- ��̬��Ա����
/*��̬��Ա����
* ���ж�����ͬһ������
* ��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����*/

class Person
{
public:
	static void func()
	{
		cout<<"func����"<<endl;
		m_A=100;	
		//m_B = 100; //���󣬲����Է��ʷǾ�̬��Ա����	
	}
	
	static int m_A;
	int m_B;
	
private:
	//��̬��Ա����Ҳ���з���Ȩ�޵�
	static void func2()
	{
		cout<<"func2����"<<endl;
		
	}
};

int Person ::m_A=900;


void test01()	
{
	//��̬��Ա�������ַ��ʷ�ʽ
    //1��ͨ������
    Person p1;
    p1.func();
    
  	//2��ͨ������  
    Person ::func();
    //Person::func2(); //˽��Ȩ�޷��ʲ���
}
	
int main() {

	test01();
	system("pause");

	return 0;
}
