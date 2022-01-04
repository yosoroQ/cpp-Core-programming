#include<iostream>
using namespace std;

//引用   引用做函数参数
//函数传参时，可以利用引用的技术让形参修饰实参
//优点：可以简化指针修改实参

//引用传递
void my03(int&a,int&b)
{
	int temp=a;
	a=b;
	b=temp;
} 

int main() {
    
    //通过引用参数产生的效果同地址传递是一样的。引用的语法更清楚简单
    int a=10;
    int b=200;
    
    my03(a,b);
    cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl; //输出a,b互换，即 形参修饰实参
	
	system("pause");
	return 0;
}
