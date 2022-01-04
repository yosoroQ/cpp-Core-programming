#include<iostream>
using namespace std;

//函数提高-函数默认参数
//在C++中，函数的形参列表中的形参是可以有默认值的。
//语法：返回值类型  函数名 （参数= 默认值）{}

int func(int a,int b=50, int c=4)
//int func(int a,int b=50, int c) 报错 
//如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
{
	return a*b*c;
} 
 
//2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
int func2(int a=70,int b=50);
int func2(int a,int b)
{
	return a*b;
}

 

int main() {
	
	cout<<"return值为： "<<func(80,50,60)<<endl;
    cout<<"return2值为： "<<func2(100)<<endl;
    
	system("pause");
	return 0;
}
