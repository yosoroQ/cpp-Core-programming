#include<iostream>
using namespace std;

//引用   引用的本质 
//引用的本质在c++内部实现是一个指针常量.
/*C++推荐用引用技术，因为语法方便，
引用本质是指针常量，但是所有的指针操作编译器都帮我们做了*/ 

//发现是引用，转换为 int* const ref = &a;
void func(int& ref)
{
	ref=100;  // ref是引用，转换为*ref = 100
}

int main() {
	
	int a=100;
	/*自动转换为 int* const ref = &a;
	 指针常量是指针指向不可改，也说明为什么引用不可更改*/
	int& ref=a;
	
	//内部发现ref是引用，自动帮我们转换为: *ref = 900;
	ref=900;
	
	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	system("pause");
	return 0;
}
