#include<iostream>
using namespace std;

//���������-��ϵ���������
//���ع�ϵ������������������Զ������Ͷ�����жԱȲ���


class Person
{
public:
    Person (string name,int age)
    {
        this->m_Name=name;
        this->m_Age=age;
	}
	
	//������ 
    bool operator==(Person &p)
    {
		if(this->m_Name==p.m_Name && this->m_Age==p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	//�������� 	
	bool operator!=(Person & p)
		{
			if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	
    string m_Name;
	int m_Age;
};


void test01()  
{
   	Person a("�����", 18);
   	Person b("�����", 19);
   	
   	
  //������ 
   	if(a==b)
   	{
	   cout<<"a=b"<<endl;	
    }
    else
    {
		cout<<"a��=b"<<endl;
	}
	
	//�������� 
	if (a != b)
		{
			cout << "a��b�����" << endl;
		}
		else
		{
			cout << "a��b���" << endl;
		}
}



int main() {

    test01();
	system("pause");

	return 0;
}
