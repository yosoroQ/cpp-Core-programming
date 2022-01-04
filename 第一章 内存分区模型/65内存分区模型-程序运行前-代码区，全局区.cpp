#include<iostream>
using namespace std;

//内存分区模型(代码区  全局区  栈区  堆区) 
//全局区 
//内存四区意义：不同区域存放的数据，赋予不同的生命周期, 给我们更大的灵活编程
// 程序运行前 
// const修饰的全局常量  和 字符串常量
/*全局区：全局变量和静态变量存放在此.
全局区还包含了常量区, 字符串常量和其他常量也存放在此.
该区域的数据在程序结束后由操作系统释放*/

//全局变量
int g_a=10;
int g_b=10;

//全局常量
const int c_g_a=10; 
const int c_g_b=10; 
 
int main()
{
    //局部变量
	int a=10;
	int b=10;
	
	//打印地址
	cout<<"局部变量a的地址为： " <<(int)&a<<endl;
	cout<<"局部变量b的地址为： " <<(int)&b<<endl;
	
	// 全局变量打印地址 
	cout<<"全局变量g_a的地址为： " <<(int)&g_a<<endl;
	cout<<"全局变量g_b的地址为： " <<(int)&g_b<<endl;
	
	//静态变量
	static int s_a=10;
	static int s_b=10;
	
	cout<<"静态变量s_a的地址为： " <<(int)&s_a<<endl;
	cout<<"静态变量s_b的地址为： " <<(int)&s_b<<endl;
	
	//字符串常量 
	cout<<"字符串常量的地址为： " <<(int)&"helloworld"<<endl;
	cout<<"字符串常量的地址为： " <<(int)&"helloworld2"<<endl;
	
	//全局常量打印地址
	cout<<"全局常量c_g_a的地址为： " <<(int)&c_g_a<<endl;
	cout<<"全局常量c_g_b的地址为： " <<(int)&c_g_b<<endl;
	
	//局部常量
	const int c_1_a=10; 
	const int c_1_b=10; 
	cout<<"全局常量c_1_a的地址为： " <<(int)&c_1_a<<endl;
	cout<<"全局常量c_1_b的地址为： " <<(int)&c_1_b<<endl;
	 
	 return 0;
}
