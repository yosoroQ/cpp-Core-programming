#include<iostream>
using namespace std;

//�ڴ����ģ��(������  ȫ����  ջ��  ����) 
//ȫ���� 
//�ڴ��������壺��ͬ�����ŵ����ݣ����費ͬ����������, �����Ǹ���������
// ��������ǰ 
// const���ε�ȫ�ֳ���  �� �ַ�������
/*ȫ������ȫ�ֱ����;�̬��������ڴ�.
ȫ�����������˳�����, �ַ�����������������Ҳ����ڴ�.
������������ڳ���������ɲ���ϵͳ�ͷ�*/

//ȫ�ֱ���
int g_a=10;
int g_b=10;

//ȫ�ֳ���
const int c_g_a=10; 
const int c_g_b=10; 
 
int main()
{
    //�ֲ�����
	int a=10;
	int b=10;
	
	//��ӡ��ַ
	cout<<"�ֲ�����a�ĵ�ַΪ�� " <<(int)&a<<endl;
	cout<<"�ֲ�����b�ĵ�ַΪ�� " <<(int)&b<<endl;
	
	// ȫ�ֱ�����ӡ��ַ 
	cout<<"ȫ�ֱ���g_a�ĵ�ַΪ�� " <<(int)&g_a<<endl;
	cout<<"ȫ�ֱ���g_b�ĵ�ַΪ�� " <<(int)&g_b<<endl;
	
	//��̬����
	static int s_a=10;
	static int s_b=10;
	
	cout<<"��̬����s_a�ĵ�ַΪ�� " <<(int)&s_a<<endl;
	cout<<"��̬����s_b�ĵ�ַΪ�� " <<(int)&s_b<<endl;
	
	//�ַ������� 
	cout<<"�ַ��������ĵ�ַΪ�� " <<(int)&"helloworld"<<endl;
	cout<<"�ַ��������ĵ�ַΪ�� " <<(int)&"helloworld2"<<endl;
	
	//ȫ�ֳ�����ӡ��ַ
	cout<<"ȫ�ֳ���c_g_a�ĵ�ַΪ�� " <<(int)&c_g_a<<endl;
	cout<<"ȫ�ֳ���c_g_b�ĵ�ַΪ�� " <<(int)&c_g_b<<endl;
	
	//�ֲ�����
	const int c_1_a=10; 
	const int c_1_b=10; 
	cout<<"ȫ�ֳ���c_1_a�ĵ�ַΪ�� " <<(int)&c_1_a<<endl;
	cout<<"ȫ�ֳ���c_1_b�ĵ�ַΪ�� " <<(int)&c_1_b<<endl;
	 
	 return 0;
}
