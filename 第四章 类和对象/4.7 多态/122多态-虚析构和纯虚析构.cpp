#include<iostream>
using namespace std;

//多态 ——虚析构和纯虚析构
/*多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
  解决方式：将父类中的析构函数改为虚析构或者纯虚析构。 
*/

/*虚析构和纯虚析构共性：

可以解决父类指针释放子类对象
都需要有具体的函数实现

虚析构和纯虚析构区别：如果是纯虚析构，该类属于抽象类，无法实例化对象*/ 

/*虚析构语法:  virtual ~类名(){}

纯虚析构语法：virtual ~类名() = 0;   类名::~类名(){}
*/

class Animal
{
public:
	Animal()
	{
		cout<<"Animal构造函数调用"<<endl;
	}
	virtual void Speak()=0;
	virtual ~Animal()=0;
};

Animal::~Animal()
{
	cout<<"Animal 纯虚析构函数调用！"<<endl;
} 

//和包含普通纯虚函数的类一样，包含了纯虚析构函数的类也是一个抽象类。不能够被实例化。

class Cat:public Animal
{
public:
	Cat(string name)
	{
		cout<<"cat构造函数调用"<<endl;
		m_Name=new string(name);
	}	
	virtual void Speak()
	{
		cout<<*m_Name<<"小猫在说话"<<endl;
	}
	~Cat()
	{
		cout<<"构造函数调用"<<endl;
		if(this->m_Name!=NULL)
		{
			delete m_Name;
			m_Name=NULL;
		}
	} 
	
	public:
	string *m_Name;
};

void test01()
{
	Animal *animal =new Cat("Tom");
	animal->Speak();
	
	//通过父类指针去释放，会导致子类对象可能清理不干净，造成内存泄漏
	//怎么解决？给基类增加一个虚析构函数
	//虚析构函数就是用来解决通过父类指针释放子类对象
		
	delete animal;
}


int main() {

    test01();
	system("pause");

	return 0;
}
