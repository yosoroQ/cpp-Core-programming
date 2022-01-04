#include<iostream>
using namespace std;

//函数提高-函数占位参数
//在C++中函数的形参列表里可以有占位参数，用来做占位，调用函数时必须填补该位置
//语法：返回值类型 函数名 (数据类型){}

//在现阶段函数的占位参数存在意义不大 

void func(int a, int)
{
	cout<<"这是func"<<endl;
}

 

int main() {
	
	//func(22);//占位参数必须填补
    func(22,3);
    
	system("pause");
	return 0;
}
