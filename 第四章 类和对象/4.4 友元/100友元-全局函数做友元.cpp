#include<iostream>
using namespace std;

//��Ԫ - ȫ�ֺ�������Ԫ
/*��Ԫ��Ŀ�ľ�����һ������������ ������һ������˽�г�Ա

��Ԫ�Ĺؼ���Ϊ  friend

��Ԫ������ʵ��

* ȫ�ֺ�������Ԫ
* ������Ԫ
* ��Ա��������Ԫ*/

class Building
{
	friend void goodGay(Building*Building);
public:
	Building()
	{
		this->m_SittingRoom = "����";
		this->m_BedRoom = "wos";
	}

public:
	string m_SittingRoom; //����

private:
	string m_BedRoom; //����
	
};


void goodGay(Building*Building)
{
	cout<<"�û������ڷ��ʣ�"<<Building->m_SittingRoom<<endl;
	cout<<"�û������ڷ��ʣ�"<<Building->m_BedRoom<<endl;
}

void test01()
{
	Building b;
	goodGay(&b);
}

int main() {

    test01();
	system("pause");

	return 0;
}
