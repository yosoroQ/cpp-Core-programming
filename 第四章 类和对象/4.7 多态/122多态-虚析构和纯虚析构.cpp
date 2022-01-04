#include<iostream>
using namespace std;

//��̬ �����������ʹ�������
/*��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
  �����ʽ���������е�����������Ϊ���������ߴ��������� 
*/

/*�������ʹ����������ԣ�

���Խ������ָ���ͷ��������
����Ҫ�о���ĺ���ʵ��

�������ʹ���������������Ǵ����������������ڳ����࣬�޷�ʵ��������*/ 

/*�������﷨:  virtual ~����(){}

���������﷨��virtual ~����() = 0;   ����::~����(){}
*/

class Animal
{
public:
	Animal()
	{
		cout<<"Animal���캯������"<<endl;
	}
	virtual void Speak()=0;
	virtual ~Animal()=0;
};

Animal::~Animal()
{
	cout<<"Animal ���������������ã�"<<endl;
} 

//�Ͱ�����ͨ���麯������һ���������˴���������������Ҳ��һ�������ࡣ���ܹ���ʵ������

class Cat:public Animal
{
public:
	Cat(string name)
	{
		cout<<"cat���캯������"<<endl;
		m_Name=new string(name);
	}	
	virtual void Speak()
	{
		cout<<*m_Name<<"Сè��˵��"<<endl;
	}
	~Cat()
	{
		cout<<"���캯������"<<endl;
		if(this->m_Name!=NULL)
		{
			delete m_Name;
			m_Name=NULL;
		}
	} 
	
	public:
	string *m_Name;
};

void test01()
{
	Animal *animal =new Cat("Tom");
	animal->Speak();
	
	//ͨ������ָ��ȥ�ͷţ��ᵼ�����������������ɾ�������ڴ�й©
	//��ô���������������һ������������
	//���������������������ͨ������ָ���ͷ��������
		
	delete animal;
}


int main() {

    test01();
	system("pause");

	return 0;
}
