#include<iostream>
using namespace std;

//内存分区模型   
// new操作符    释放利用操作符 delete
//堆区开辟的数据，由程序员手动开辟，手动释放
//在C++中主要利用new在堆区开辟内存
//利用new创建的数据，会返回该数据对应的类型的指针
//语法： new 数据类型

int * func() 
{
	int* p = new int(10); 
	return p;  
}

int main() {

    //接受func函数的返回值 
	int *p = func();

    //都是10 
	cout << *p << endl;  
	cout << *p << endl; 
	
	//利用delete释放堆区数据
	delete p; 
	cout << *p << endl;  //报错，释放的空间不可访问

	system("pause");

	return 0;
}
