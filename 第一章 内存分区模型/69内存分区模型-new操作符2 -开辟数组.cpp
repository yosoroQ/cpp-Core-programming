#include<iostream>
using namespace std;

//�ڴ����ģ��   
// new������    ��������
//��C++����Ҫ����new�ڶ��������ڴ�
//����new���������ݣ��᷵�ظ����ݶ�Ӧ�����͵�ָ��
//�﷨�� new ��������

void test2() 
{
	int* arr=new int[10]; //10����������10��Ԫ�� 
    
    for(int i=0;i<10;i++)
    {
		arr[i]=i+100;
	}
	
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	//�ͷŶ�����ֵ
	//�ͷ������ʱ��Ҫ��[]�ſ���
	delete[]arr;  //��������ͷŸɾ��� 
}

int main() {
    test2();
   
	system("pause");

	return 0;
}
