#include<iostream>
#include<fstream> 
using namespace std;

//�ļ����� - �������ļ� - д�ļ�
//�Զ����Ƶķ�ʽ���ļ����ж�д�������򿪷�ʽҪָ��Ϊ ios::binary

/*�������Ʒ�ʽд�ļ���Ҫ������������ó�Ա����write

����ԭ�� ��ostream& write(const char * buffer,int len);

�������ͣ��ַ�ָ��bufferָ���ڴ���һ�δ洢�ռ䡣len�Ƕ�д���ֽ���
*/

/*�ܽ᣺�ļ���������� ����ͨ��write�������Զ����Ʒ�ʽд����*/

class Person
{
public:
	char m_Name[64];
	int m_Age;
}; 

//�������ļ� д�ļ�
void test01()
{
	//1������ͷ�ļ�
	
	//2���������������
	ofstream ofs("2.txt",ios::out|ios::binary);
	
	//3�����ļ�
	//ofs.open("person.txt", ios::out | ios::binary);
	
	Person p={"����",19};
	
	//4��д�ļ�
	ofs.write((const char*)&p,sizeof(p));
	
	//5���ر��ļ�
	ofs.close();
	
}


int main() {

    test01();
	system("pause");

	return 0;
}
