#include<iostream>
using namespace std;

//80��Ͷ���-��װ
/*��װ��������������ʱ�����԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���£����Կ���

����Ȩ�������֣�
1. public        ����Ȩ��  
2. protected ����Ȩ��
3. private      ˽��Ȩ��
*/

class Person
{
	public:
	string m_Name;  	//����  ����Ȩ��
	
	protected:
	string m_Car;    	//����  ����Ȩ��
	
	private:
	int m_Password;   //���п�����  ˽��Ȩ��
	
	public:
	void func()
	{
		m_Name="����";
		m_Car="������";
		m_Password=123; 
	}
};

int main() {

    Person p;
    p.m_Name="laoliu";
//    p.m_Car="laoliu"; ����Ȩ��������ʲ���
//    p.m_Password=122333;  ˽��Ȩ��������ʲ���
    
	
	system("pause");
	return 0;
}
