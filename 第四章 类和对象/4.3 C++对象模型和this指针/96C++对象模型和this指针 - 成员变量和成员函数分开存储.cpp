#include<iostream>
using namespace std;

//C++����ģ�ͺ�thisָ�� - ��Ա�����ͳ�Ա�����ֿ��洢
/*��C++�У����ڵĳ�Ա�����ͳ�Ա�����ֿ��洢,
ֻ�зǾ�̬��Ա������������Ķ�����*/

class Person
{
public:
    Person()
    {
		m_A=0;
	}
	//�Ǿ�̬��Ա����ռ����ռ�
	int m_A;
	
	//��̬��Ա������ռ����ռ�
	static int m_B;
	
	//����Ҳ��ռ����ռ䣬���к�������һ������ʵ��
	void func()
	{
		cout<<"m_A="<<this->m_A<<endl;
	} 

	//��̬��Ա����Ҳ��ռ����ռ�
	static void sfunc()
	{}
	
};


int main() {

	cout<<"size of p��"<<sizeof(Person)<<endl;
	system("pause");

	return 0;
}
