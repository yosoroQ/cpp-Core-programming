#include<iostream>
using namespace std;

//对象的初始化和清理-初始化列表
//作用：C++提供了初始化列表语法，用来初始化属性

//语法：构造函数()：属性1(值1),属性2（值2）... {}

class Person
{
public:
	
	//初始化列表方式初始化
	Person(int a, int b, int c):m_A(a),m_B(b),m_C(c)
	{}
		void PrintPerson()
		{
		cout << "mA:" << m_A << endl;
		cout << "mB:" << m_B << endl;
		cout << "mC:" << m_C << endl;
		}
		
private:
    int m_A;
    int m_B;
    int m_C;

};


int main() {

   	Person p(65,8,7);   
   	p.PrintPerson();

	system("pause");

	return 0;
}
