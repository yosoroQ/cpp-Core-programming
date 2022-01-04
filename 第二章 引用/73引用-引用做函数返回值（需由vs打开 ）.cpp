#include<iostream>
using namespace std;

//引用   引用做函数返回值
//引用是可以作为函数的返回值存在的
//注意：不要返回局部变量引用
//用法：函数调用作为左值

//返回局部变量引用
int& test01()
{
	int a = 10;
	return a;
}

//返回静态变量引用
int& test02()
{
	static int a = 20;
	return a;
}

int main() {
	
	//不能返回局部变量的引用
	int& ref = test01();
	cout << "ref= " << ref << endl; //输出10
	cout << "ref= " << ref << endl; //输出乱序

	//如果函数做左值，那么必须返回引用
	int& ref2 = test02();
	//都是20
	cout << "ref2= " << ref2 << endl; 
	cout << "ref2= " << ref2 << endl;

	test02() = 1200;
	//做左值，此时test02()为1200
	cout << "ref2= " << ref2 << endl;
	cout << "ref2= " << ref2 << endl;

	system("pause");
	return 0;
}