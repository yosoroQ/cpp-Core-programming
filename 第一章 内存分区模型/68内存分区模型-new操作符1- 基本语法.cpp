#include<iostream>
using namespace std;

//�ڴ����ģ��   
// new������    �ͷ����ò����� delete
//�������ٵ����ݣ��ɳ���Ա�ֶ����٣��ֶ��ͷ�
//��C++����Ҫ����new�ڶ��������ڴ�
//����new���������ݣ��᷵�ظ����ݶ�Ӧ�����͵�ָ��
//�﷨�� new ��������

int * func() 
{
	int* p = new int(10); 
	return p;  
}

int main() {

    //����func�����ķ���ֵ 
	int *p = func();

    //����10 
	cout << *p << endl;  
	cout << *p << endl; 
	
	//����delete�ͷŶ�������
	delete p; 
	cout << *p << endl;  //�����ͷŵĿռ䲻�ɷ���

	system("pause");

	return 0;
}
