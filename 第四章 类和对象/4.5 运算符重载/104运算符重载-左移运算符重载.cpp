#include<iostream>
using namespace std;

//���������-�������������
//���ã���������Զ�����������

class Person
{
	friend ostream &operator<<(ostream &out, Person &p);
public:
    Person(int a,int b)
    {
		this->m_A=a;
		this->m_B=b;
	}

private:
	int m_A;
	int m_B;
};

//ȫ�ֺ���ʵ����������
//ostream����ֻ����һ��
ostream &operator<<(ostream &out, Person &p)
{
	out<<"a: "<<p.m_A<<"b: "<<p.m_B;
	return out;
}

void test01()
{
    Person p1(10,80);
    cout<<p1<<endl;
}

int main() {

    test01();
	system("pause");

	return 0;
}
