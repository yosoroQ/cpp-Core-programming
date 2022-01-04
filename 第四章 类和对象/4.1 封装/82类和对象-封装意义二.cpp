#include<iostream>
using namespace std;

//80类和对象-封装
/*封装意义二：类在设计时，可以把属性和行为放在不同的权限下，加以控制

访问权限有三种：
1. public        公共权限  
2. protected 保护权限
3. private      私有权限
*/

class Person
{
	public:
	string m_Name;  	//姓名  公共权限
	
	protected:
	string m_Car;    	//汽车  保护权限
	
	private:
	int m_Password;   //银行卡密码  私有权限
	
	public:
	void func()
	{
		m_Name="李四";
		m_Car="拖拉机";
		m_Password=123; 
	}
};

int main() {

    Person p;
    p.m_Name="laoliu";
//    p.m_Car="laoliu"; 保护权限类外访问不到
//    p.m_Password=122333;  私有权限类外访问不到
    
	
	system("pause");
	return 0;
}
