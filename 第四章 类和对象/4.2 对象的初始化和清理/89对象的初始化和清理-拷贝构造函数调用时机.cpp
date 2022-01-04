#include<iostream>
using namespace std;

//对象的初始化和清理-拷贝构造函数调用时机
/*C++中拷贝构造函数调用时机通常有三种情况

使用一个已经创建完毕的对象来初始化一个新对象
值传递的方式给函数参数传值
以值方式返回局部对象
*/

class Person
{
public:
	Person()
	{
		cout << "无参（默认）构造函数!" << endl;
		mAge = 0;
	}
	
	Person(int age)
	{
		cout << "有参构造函数!" << endl;
		mAge=age;
	}

	Person(const Person &p)
	{

		cout << "拷贝构造函数!" << endl;
		mAge=p.mAge;
	}
	
	//析构函数
	~Person() {
		cout << "析构函数!" << endl;
	}	
	
public:
	int mAge;
};

//1. 使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person man(200);   //p对象已经创建完毕
	Person newman(man);  //调用拷贝构造函数
	Person newman2=man;   //拷贝构造
}

//2. 值传递的方式给函数参数传值
//相当于Person p1 = p;
void doWork(Person p1) {}
void test02() 
{
	Person p;
	doWork(p);		
}

//3. 以值方式返回局部对象
Person doWork2()
{
	Person p1;
	cout << (int *)&p1 << endl;
	return p1;
}

void test03() 
{
	Person p=doWork2();
	cout << (int *)&p<< endl;		
}

int main() {

    test01();
    test02();
    test03();

	system("pause");

	return 0;
}
