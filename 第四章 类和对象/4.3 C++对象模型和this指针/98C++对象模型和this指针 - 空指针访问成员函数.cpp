#include<iostream>
using namespace std;

//C++����ģ�ͺ�thisָ�� - ��ָ����ʳ�Ա����
//C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����ҲҪע����û���õ�thisָ��
//����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��

class Person
{
public:
	void showClassName()
	{
		cout<<"����Person��"<<endl;
	}
    
    void showPerson()
	{
		if(this==NULL)  //���� 
		{
			return;
		}
		cout<<mAge<<endl;
	}
    int mAge;
};

void test01()
{
	Person *p=NULL;
	p->showClassName(); //��ָ�룬���Ե��ó�Ա����
	p->showPerson();  //���������Ա�������õ���thisָ�룬�Ͳ�������
}

int main() {

    test01();
	system("pause");

	return 0;
}
