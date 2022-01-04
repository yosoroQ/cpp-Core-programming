#include<iostream>
using namespace std;

//继承 ——继继承同名静态成员处理方式
//静态成员和非静态成员出现同名，处理方式一致
//访问子类同名成员   直接访问即可
//访问父类同名成员   需要加作用域
//总结：同名静态成员处理方式和非静态处理方式一样，只不过有两种访问的方式（通过对象 和 通过类名）


class Base
{
public:
   static void func()
   {
   	    cout << "Base - static void func()" << endl;
   }
   static void func(int a)
    {
      	cout << "Base - static void func(int a)" << endl;
    }
   static int m_A;
}; 

int Base::m_A = 100;

class Son:public Base
{
public:
   static void func()
    {
      	cout << "Base - static void func()" << endl;
    }
    static int m_A;	
}; 

int Son::m_A=200;

//同名成员属性
void test01()
{
   //通过对象访问
	cout << "通过对象访问： " << endl;
	Son s;
	cout<< "Son  下 m_A = " <<s.m_A<<endl;   
	cout<< "Base 下 m_A = " << s.Base::m_A<<endl;   
	
	//通过类名访问
	cout << "通过类名访问： " << endl;
	cout<< "Son  下 m_A = " <<Son::m_A<<endl;   
	cout<< "Base 下 m_A = " <<Son::Base::m_A<<endl;   	    
}

void test02()
{
	//通过对象访问
	cout << "通过对象访问： " << endl;
	Son s;
	s.func();
	s.Base::func();
	
	//通过类名访问
	cout << "通过类名访问： " << endl;
	Son::func();
	Son::Base::func();
	//出现同名，子类会隐藏掉父类中所有同名成员函数，需要加作作用域访问
	Son::Base::func(100);	
	
}


int main() {

    test01();
    cout<<"-----------------------------"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"-----------------------------"<<endl;
    test02();
    

	system("pause");

	return 0;
}
