#include<iostream>
using namespace std;

//�ڴ����ģ��   ����
// �������к�
//�ɳ���Ա�����ͷ�,������Ա���ͷ�,�������ʱ�ɲ���ϵͳ����
//��C++����Ҫ����new�ڶ��������ڴ�

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

	system("pause");

	return 0;
}
