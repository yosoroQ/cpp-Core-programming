#include<iostream>
using namespace std;

//内存分区模型   
// new操作符    开辟数组
//在C++中主要利用new在堆区开辟内存
//利用new创建的数据，会返回该数据对应的类型的指针
//语法： new 数据类型

void test2() 
{
	int* arr=new int[10]; //10代表数组有10个元素 
    
    for(int i=0;i<10;i++)
    {
		arr[i]=i+100;
	}
	
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	//释放堆区数值
	//释放数组的时候。要加[]才可以
	delete[]arr;  //运行完就释放干净了 
}

int main() {
    test2();
   
	system("pause");

	return 0;
}
