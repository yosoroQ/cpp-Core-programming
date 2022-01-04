#include<iostream>
using namespace std;

//友元 - 全局函数做友元
/*友元的目的就是让一个函数或者类 访问另一个类中私有成员

友元的关键字为  friend

友元的三种实现

* 全局函数做友元
* 类做友元
* 成员函数做友元*/

class Building
{
	friend void goodGay(Building*Building);
public:
	Building()
	{
		this->m_SittingRoom = "客厅";
		this->m_BedRoom = "wos";
	}

public:
	string m_SittingRoom; //客厅

private:
	string m_BedRoom; //卧室
	
};


void goodGay(Building*Building)
{
	cout<<"好基友正在访问："<<Building->m_SittingRoom<<endl;
	cout<<"好基友正在访问："<<Building->m_BedRoom<<endl;
}

void test01()
{
	Building b;
	goodGay(&b);
}

int main() {

    test01();
	system("pause");

	return 0;
}
