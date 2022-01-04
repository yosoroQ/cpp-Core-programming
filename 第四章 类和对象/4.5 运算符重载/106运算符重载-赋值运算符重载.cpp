#include<iostream>
using namespace std;

//���������-��ֵ���������
//��ֵ����� operator=, �����Խ���ֵ����
//�������������ָ�����������ֵ����ʱҲ�������ǳ��������

class Person
{
public:
    Person (int age)
    {
		m_Age=new int(age);	//���������ݿ��ٵ�����
	}
	
	//���ظ�ֵ����� 
	Person &operator=(Person &p)
	{
		if(m_Age!=NULL)
		{
			delete m_Age;
			m_Age=NULL;
		}
		
		//�������ṩ�Ĵ�����ǳ����
		//m_Age = p.m_Age;
		
		m_Age=new int(*p.m_Age);  //�ṩ��� ���ǳ����������
		return *this; //��������
	} 
		
    ~Person()
	{
		if(m_Age!=NULL)
		{
			delete m_Age;
			m_Age=NULL;
		}
	}   

	//�����ָ��
	int *m_Age;

};


void test01()  
{
   Person p1(18);
   
   	Person p2(20);
   
   	Person p3(30);
   
   	p1 = p2 = p3; //��ֵ����
   
   	cout << "p1������Ϊ��" << *p1.m_Age << endl;
   
   	cout << "p2������Ϊ��" << *p2.m_Age << endl;
   
   	cout << "p3������Ϊ��" << *p3.m_Age << endl;
}



int main() {

    test01();
	system("pause");

	return 0;
}
