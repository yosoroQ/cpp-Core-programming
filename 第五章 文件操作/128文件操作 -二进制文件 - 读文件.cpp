#include<iostream>
#include<fstream> 
using namespace std;

//�ļ����� - �������ļ� -  ���ļ�
//�����Ʒ�ʽ���ļ���Ҫ������������ó�Ա����read
//����ԭ�ͣ�istream& read(char *buffer,int len);`
//�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���
//�ļ����������� ����ͨ��read�������Զ����Ʒ�ʽ������


class Person
{
public:
	char m_Name[64];
	int m_Age;
}; 

//�������ļ� д�ļ�
void test01()
{

	ifstream ifs("2.txt",ios::in|ios::binary);
	
    if(!ifs.is_open())
    {
		cout<<"�ļ���ʧ��"<<endl;
	}
	
	Person p;

	ifs.read((char*)&p,sizeof(p));
	
    cout<<"������"<<p.m_Name<<"   "<<"���䣺"<<p.m_Age<<endl;
	
}


int main() {

    test01();
	system("pause");

	return 0;
}
