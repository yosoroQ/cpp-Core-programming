#include<iostream>
using namespace std;

//内存分区模型   栈区  
// 程序运行后
//栈区：由编译器自动分配释放, 存放函数的参数值,局部变量等
//不要返回局部变量的地址，栈区开辟的数据由编译器自动释放

int * func() //形参数据也会放在栈区
{
	int a = 10; //局部变量存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;  //返回局部变量的地址	
}

int main() {

    //接受func函数的返回值 
	int *p = func();

	cout << *p << endl; //编译器做保留 
	cout << *p << endl; //第二次打不出来 

	system("pause");

	return 0;
}
