#include<iostream>
using namespace std;

//内存分区模型   堆区
// 程序运行后
//由程序员分配释放,若程序员不释放,程序结束时由操作系统回收
//在C++中主要利用new在堆区开辟内存

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

	system("pause");

	return 0;
}
