#include<iostream>
using namespace std;

//80��Ͷ���-��װ
//ʾ��2��ѧ���� 

class Student
{
	public:
	void setName(string name)
	{
		m_name=name;
	}
	void setID(int id)
	{
		m_id=id;
	}
	void showStudent()
	{
		cout<<"name:"<<m_name<<"   "<<"id= "<<m_id<<endl;
	}
	public:
	string m_name;
	int m_id;
};

int main() {
	
	Student stu;
	stu.setName("����");
	stu.setID(500);
	stu.showStudent() ;
	
	system("pause");
	return 0;
}
