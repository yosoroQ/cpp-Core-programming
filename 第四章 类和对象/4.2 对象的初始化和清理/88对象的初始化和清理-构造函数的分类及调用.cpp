#include<iostream>
using namespace std;

//����ĳ�ʼ��������-���캯���ķ��༰����
/*���ַ��෽ʽ��
	��������Ϊ�� �вι�����޲ι���
	�����ͷ�Ϊ�� ��ͨ����Ϳ�������
	
���ֵ��÷�ʽ��
	���ŷ�
	��ʾ��
	��ʽת����
*/

class Person
{
public:
	//�޲Σ�Ĭ�ϣ����캯��
	Person()
	{
		cout << "�޲Σ�Ĭ�ϣ����캯��!" << endl;
	}
	
	//�вι��캯��
	Person(int a)
	{
		age=a;
		cout << "�вι��캯��!" << endl;
	}
	//�������캯��
	Person(const Person &p)
	{
		age=p.age;
		cout << "�������캯��!" << endl;
	}
	
	//��������
	~Person() {
		cout << "��������!" << endl;
	}	
	
public:
	int age;
};

//2�����캯���ĵ���
void test01()
{
	Person p;  //�����޲ι��캯��
}

//�����вεĹ��캯��
void test02() 
{
	//2.1  ���ŷ�������
	Person p1;
	//ע��1�������޲ι��캯�����ܼ����ţ�������˱�������Ϊ����һ����������
	//Person p2();
	
	//2.2 ��ʽ��	
	Person p2=Person(20);
	Person p3=Person(p2);
	//Person(10)����д������������  ��ǰ�н���֮����������
	
	Person p4=90;  // Person p4 = Person(10); 
	Person p5=p4;  // Person p5 = Person(p4); 
	//ע��2���������� �������캯�� ��ʼ���������� ��������Ϊ�Ƕ�������
	//Person p5(p4);
		
}

int main() {

    test01();
    test02();

	system("pause");

	return 0;
}
