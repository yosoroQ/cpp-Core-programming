#include<iostream>
using namespace std;

//对象的初始化和清理- 静态成员函数
/*静态成员函数
* 所有对象共享同一个函数
* 静态成员函数只能访问静态成员变量*/

class Person
{
public:
	static void func()
	{
		cout<<"func调用"<<endl;
		m_A=100;	
		//m_B = 100; //错误，不可以访问非静态成员变量	
	}
	
	static int m_A;
	int m_B;
	
private:
	//静态成员函数也是有访问权限的
	static void func2()
	{
		cout<<"func2调用"<<endl;
		
	}
};

int Person ::m_A=900;


void test01()	
{
	//静态成员变量两种访问方式
    //1、通过对象
    Person p1;
    p1.func();
    
  	//2、通过类名  
    Person ::func();
    //Person::func2(); //私有权限访问不到
}
	
int main() {

	test01();
	system("pause");

	return 0;
}
