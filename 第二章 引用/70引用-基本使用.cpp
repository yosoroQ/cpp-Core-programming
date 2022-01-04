#include<iostream>
using namespace std;

//引用   基本使用
// 给变量起别名
//语法：数据类型 &别名 = 原名



int main() {
    
    int a=10;
    int &b=a;
    //输出10 
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    
    b=100;
    //都是输出100 
    cout<<"a= "<<a<<endl;  
	cout<<"b= "<<b<<endl;
	
	system("pause");

	return 0;
}
