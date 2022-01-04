#include<iostream>
using namespace std;

//对象的初始化和清理-构造函数的分类及调用
/*两种分类方式：
	按参数分为： 有参构造和无参构造
	按类型分为： 普通构造和拷贝构造
	
三种调用方式：
	括号法
	显示法
	隐式转换法
*/

class Person
{
public:
	//无参（默认）构造函数
	Person()
	{
		cout << "无参（默认）构造函数!" << endl;
	}
	
	//有参构造函数
	Person(int a)
	{
		age=a;
		cout << "有参构造函数!" << endl;
	}
	//拷贝构造函数
	Person(const Person &p)
	{
		age=p.age;
		cout << "拷贝构造函数!" << endl;
	}
	
	//析构函数
	~Person() {
		cout << "析构函数!" << endl;
	}	
	
public:
	int age;
};

//2、构造函数的调用
void test01()
{
	Person p;  //调用无参构造函数
}

//调用有参的构造函数
void test02() 
{
	//2.1  括号法，常用
	Person p1;
	//注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明
	//Person p2();
	
	//2.2 显式法	
	Person p2=Person(20);
	Person p3=Person(p2);
	//Person(10)单独写就是匿名对象  当前行结束之后，马上析构
	
	Person p4=90;  // Person p4 = Person(10); 
	Person p5=p4;  // Person p5 = Person(p4); 
	//注意2：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明
	//Person p5(p4);
		
}

int main() {

    test01();
    test02();

	system("pause");

	return 0;
}
