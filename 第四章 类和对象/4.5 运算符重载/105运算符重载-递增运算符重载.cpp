#include<iostream>
using namespace std;

//运算符重载-递增运算符重载
//作用： 通过重载递增运算符，实现自己的整型数据

class MYIN
{
	friend ostream &operator<<(ostream &out, MYIN myint);
public:
    MYIN()
    {
		m_Num=2;
	}
	//前置++
	MYIN &operator++()
	{
		m_Num++;  //先++
		return *this;  //再返回
	} 
	
	//后置++
	MYIN operator++(int)
	{
		//先返回
		//记录当前本身的值，然后让本身的值加1，但是返回的是以前的值，达到先返回后++；
		MYIN temp=*this; 
		m_Num++; 
		return temp;  
	}
    

private:
	int m_Num;
};

ostream &operator<<(ostream &out, MYIN myint)
{
	out<<myint.m_Num;
	return out;
}

//前置++ 先++ 再返回
void test01()  
{
   MYIN myint;
   cout<<++myint<<endl;
   cout<<myint<<endl;
}

//后置++ 先返回 再++
void test02()  
{
   MYIN myint;
   cout<<myint++<<endl;
   cout<<myint<<endl;
}

int main() {

    test01();
    test02();
	system("pause");

	return 0;
}
