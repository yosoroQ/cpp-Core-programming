#include<iostream>
using namespace std;

//运算符重载-赋值运算符重载
//赋值运算符 operator=, 对属性进行值拷贝
//如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题

class Person
{
public:
    Person (int age)
    {
		m_Age=new int(age);	//将年龄数据开辟到堆区
	}
	
	//重载赋值运算符 
	Person &operator=(Person &p)
	{
		if(m_Age!=NULL)
		{
			delete m_Age;
			m_Age=NULL;
		}
		
		//编译器提供的代码是浅拷贝
		//m_Age = p.m_Age;
		
		m_Age=new int(*p.m_Age);  //提供深拷贝 解决浅拷贝的问题
		return *this; //返回自身
	} 
		
    ~Person()
	{
		if(m_Age!=NULL)
		{
			delete m_Age;
			m_Age=NULL;
		}
	}   

	//年龄的指针
	int *m_Age;

};


void test01()  
{
   Person p1(18);
   
   	Person p2(20);
   
   	Person p3(30);
   
   	p1 = p2 = p3; //赋值操作
   
   	cout << "p1的年龄为：" << *p1.m_Age << endl;
   
   	cout << "p2的年龄为：" << *p2.m_Age << endl;
   
   	cout << "p3的年龄为：" << *p3.m_Age << endl;
}



int main() {

    test01();
	system("pause");

	return 0;
}
