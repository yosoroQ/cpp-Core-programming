#include<iostream>
using namespace std;

//�������-����ռλ����
//��C++�к������β��б��������ռλ������������ռλ�����ú���ʱ�������λ��
//�﷨������ֵ���� ������ (��������){}

//���ֽ׶κ�����ռλ�����������岻�� 

void func(int a, int)
{
	cout<<"����func"<<endl;
}

 

int main() {
	
	//func(22);//ռλ���������
    func(22,3);
    
	system("pause");
	return 0;
}
