#include<iostream>
using namespace std;

//����ĳ�ʼ��������-�����ǳ����
//��ǳ���������Ծ�������

/*ǳ�������򵥵ĸ�ֵ��������
������ڶ�����������ռ䣬���п�������*/

class Person
{
public:
	//�޲Σ�Ĭ�ϣ����캯��
	Person()
	{
		cout << "�޲Σ�Ĭ�ϣ����캯��!" << endl;
	}
	//�вι��캯��	
	Person(int age, int height)
	{
		cout << "�вι��캯��!" << endl;
		m_age=age;
		m_height=new int(height);
	}
	//�������캯��
	Person(const Person &p)
	{
		cout << "�������캯��!" << endl;
		//�������������ڶ����������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶ�������
		m_age = p.m_age;
		m_height = new int(*p.m_height);
	}
	
	//��������
	~Person() {
		cout << "��������!" << endl;
		if(m_height!=NULL)
		{
			delete m_height;
		}
	}	
	
public:
    int m_age;
	int* m_height;
};


void test01()
{
	Person P1(18,190);   
	Person P2(P1);  
	cout << "P1������Ϊ�� " << P1.m_age <<" ��ߣ� " <<*P1.m_height<< endl; 
	cout << "P2������Ϊ�� " << P2.m_age <<" ��ߣ� " <<*P2.m_height<< endl; 
}



int main() {

    test01();

	system("pause");

	return 0;
}
