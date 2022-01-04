#include<iostream>
using namespace std;

//80类和对象-封装
/*封装的意义：
将属性和行为作为一个整体，表现生活中的事物
将属性和行为加以权限控制*/ 
//封装意义一：在设计类的时候，属性和行为写在一起，表现事物
//语法：class 类名{   访问权限： 属性  / 行为  };`

//示例1：设计一个圆类，求圆的周长

const double PI=3.14;  //圆周率 

class Circle     //class代表设计一个类，后面跟着的是类名
{
  	public:     //访问权限  公共的权限
  	int m_r;   //属性  半径
  	double calculateZC()   //行为  获取到圆的周长
  	{
	  	return 2*PI*m_r;    //2 * pi  * r   获取圆的周长
	}
};

int main() {
    
    Circle c1;  //通过圆类，创建圆的对象
    c1.m_r=40;  //给圆对象的半径 进行赋值操作
    
    cout<<"圆的周长： "<<c1.calculateZC()<<endl;

	system("pause");
	return 0;
}
