#include<iostream>
using namespace std;

//函数提高-函数重载
//注意事项

//1、引用作为重载条件
void func(int &a)
{
	cout << "这是func(int a)的调用" << endl;
}

void func(const int &a)
{
	cout << "这是func(const int &a)的调用" << endl;
}

//2、函数重载碰到函数默认参数
void func2(int a,int b=50)
{
	cout << "这是func(int a,int b=50)的调用" << endl;
}

void func2(int a)
{
	cout << "这是func(int a)的调用" << endl;
}

int main() {
    
    int a=10;
	func(a);  //调用无const 
	func(10);  //调用有const
	
    //func2(21);  碰到默认参数产生歧义，需要避免

	system("pause");
	return 0;
}
