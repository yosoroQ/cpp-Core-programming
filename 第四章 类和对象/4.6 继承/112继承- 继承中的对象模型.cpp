#include<iostream>
using namespace std;

//�̳� �����̳��еĶ���ģ��
//���⣺**�Ӹ���̳й����ĳ�Ա����Щ������������У�
//������˽�г�ԱҲ�Ǳ�����̳���ȥ�ˣ�ֻ���ɱ����������غ���ʲ��� 


class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;  //˽�г�Աֻ�Ǳ������ˣ����ǻ��ǻ�̳���ȥ
}; 

//�����̳�
class Son:public Base
{
public:
    int m_D;  
};

void test01()
{
	//16   A+B+C+D=16 ���̳������ˣ�����˽�е� 
	cout<<"sizeof son= "<<sizeof(Son)<<endl;
}

int main() {

    test01();

	system("pause");

	return 0;
}
