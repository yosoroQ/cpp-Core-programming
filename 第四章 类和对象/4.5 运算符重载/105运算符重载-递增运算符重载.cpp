#include<iostream>
using namespace std;

//���������-�������������
//���ã� ͨ�����ص����������ʵ���Լ�����������

class MYIN
{
	friend ostream &operator<<(ostream &out, MYIN myint);
public:
    MYIN()
    {
		m_Num=2;
	}
	//ǰ��++
	MYIN &operator++()
	{
		m_Num++;  //��++
		return *this;  //�ٷ���
	} 
	
	//����++
	MYIN operator++(int)
	{
		//�ȷ���
		//��¼��ǰ�����ֵ��Ȼ���ñ����ֵ��1�����Ƿ��ص�����ǰ��ֵ���ﵽ�ȷ��غ�++��
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

//ǰ��++ ��++ �ٷ���
void test01()  
{
   MYIN myint;
   cout<<++myint<<endl;
   cout<<myint<<endl;
}

//����++ �ȷ��� ��++
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
