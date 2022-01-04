#include<iostream>
using namespace std;

//运算符重载-左移运算符重载
//作用：可以输出自定义数据类型

class Person
{
	friend ostream &operator<<(ostream &out, Person &p);
public:
    Person(int a,int b)
    {
		this->m_A=a;
		this->m_B=b;
	}

private:
	int m_A;
	int m_B;
};

//全局函数实现左移重载
//ostream对象只能有一个
ostream &operator<<(ostream &out, Person &p)
{
	out<<"a: "<<p.m_A<<"b: "<<p.m_B;
	return out;
}

void test01()
{
    Person p1(10,80);
    cout<<p1<<endl;
}

int main() {

    test01();
	system("pause");

	return 0;
}
