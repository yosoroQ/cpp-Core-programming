#include<iostream>
using namespace std;

//����ĳ�ʼ��������-�������Ϊ���Ա
//C++���еĳ�Ա��������һ����Ķ������ǳƸó�ԱΪ �����Ա

//B�����ж���A��Ϊ��Ա��AΪ�����Ա
//�����˳���� ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
//����˳���빹���෴

class Phone
{
public:
	
	//��ʼ���б�ʽ��ʼ��
	Phone(string name)
	{
		m_PhoneName=name;
		cout << "Phone����" << endl;
	}
	
	~Phone()
	{
		cout << "Phone����" << endl;
	}
	
	string  m_PhoneName;
		
		
};

class Person
{
public:
	//��ʼ���б���Ը��߱�����������һ�����캯��
	Person(string name,string pName):m_Name(name),m_Phone(pName)
	{
		cout << "Person����" << endl;		
	}
	
	~Person()
	{
		cout << "Person����" << endl;
	}
	
	void playGame()
	{
		cout<<m_Name<<"ʹ��"<<m_Phone.m_PhoneName<<"���ֻ�"<<endl;
	}
	
	string m_Name;
	Phone m_Phone;
	
};

void test01()
{
	Person p("����","iphone");
	p.playGame();
}
	
int main() {

    test01();
	system("pause");

	return 0;
}
