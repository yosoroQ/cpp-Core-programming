#include<iostream>
using namespace std;

//C++����ģ�ͺ�thisָ�� - thisָ�����
//thisָ��ָ�򱻵��õĳ�Ա���������Ķ��� 
//thisָ��������ÿһ���Ǿ�̬��Ա�����ڵ�һ��ָ��
//thisָ�벻��Ҫ���壬ֱ��ʹ�ü���

/*thisָ�����;��
���βκͳ�Ա����ͬ��ʱ������thisָ��������
����ķǾ�̬��Ա�����з��ض�������ʹ��return *this*/

class Person
{
public:
    Person(int age)
    {
		this->age=age;
	}
	
	Person& PersonAddPerson(Person p)
	{
	//1�����βκͳ�Ա����ͬ��ʱ������thisָ��������
		this->age+=p.age;
		
		//���ض�����
		return *this;
	}

    int age;
};

void test01()
{
	Person p1(80);
	cout<<"p1.age="<<p1.age<<endl;
	
	Person p2(70);
	p2.PersonAddPerson(p2).PersonAddPerson(p2).PersonAddPerson(p2);
	cout<<"p2.age="<<p2.age<<endl;
}

int main() {

    test01();
	system("pause");

	return 0;
}
