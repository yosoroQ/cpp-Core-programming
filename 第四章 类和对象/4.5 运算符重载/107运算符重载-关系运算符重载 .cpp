#include<iostream>
using namespace std;

//运算符重载-关系运算符重载
//重载关系运算符，可以让两个自定义类型对象进行对比操作


class Person
{
public:
    Person (string name,int age)
    {
        this->m_Name=name;
        this->m_Age=age;
	}
	
	//相等情况 
    bool operator==(Person &p)
    {
		if(this->m_Name==p.m_Name && this->m_Age==p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	//不相等情况 	
	bool operator!=(Person & p)
		{
			if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
	
    string m_Name;
	int m_Age;
};


void test01()  
{
   	Person a("孙悟空", 18);
   	Person b("孙悟空", 19);
   	
   	
  //相等情况 
   	if(a==b)
   	{
	   cout<<"a=b"<<endl;	
    }
    else
    {
		cout<<"a！=b"<<endl;
	}
	
	//不相等情况 
	if (a != b)
		{
			cout << "a和b不相等" << endl;
		}
		else
		{
			cout << "a和b相等" << endl;
		}
}



int main() {

    test01();
	system("pause");

	return 0;
}
