#include<iostream>
using namespace std;

//80类和对象-封装
//示例2：学生类 

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
	stu.setName("李四");
	stu.setID(500);
	stu.showStudent() ;
	
	system("pause");
	return 0;
}
