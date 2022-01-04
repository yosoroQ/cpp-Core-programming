#include<iostream>
using namespace std;

//��̬ ������̬������-������Ʒ
/*����������
������Ʒ�Ĵ�������Ϊ����ˮ -  ���� - ���뱭�� - ���븨��
���ö�̬����ʵ�ֱ��������ṩ����������Ʒ���࣬�ṩ�����������ȺͲ�Ҷ
*/

class AbstractDrinking
{
public:
	//��ˮ
	virtual void Boil()=0; 
	virtual void Brew()=0; //����
	virtual void PourInCup()=0; //���뱭��
	virtual void PutSomething()=0; //���븨��
	//�涨����
	void MakeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

//��������
class Coffee:public AbstractDrinking
{
public:
	virtual void Boil()
	{
		cout << "��ũ��ɽȪ!" << endl;
	}
	virtual void Brew()
	{
		cout << "���ݿ���!" << endl;
	}
	virtual void PourInCup()
	{
		cout << "�����ȵ��뱭��!" << endl;
	}
	virtual void PutSomething()
	{
		cout << "����ţ��!" << endl;
	}
};

//������ˮ
class Tea : public AbstractDrinking {
public:
	//��ˮ
	virtual void Boil() {
		cout << "������ˮ!" << endl;
	}
	//����
	virtual void Brew() {
		cout << "���ݲ�Ҷ!" << endl;
	}
	//���뱭��
	virtual void PourInCup() {
		cout << "����ˮ���뱭��!" << endl;
	}
	//���븨��
	virtual void PutSomething() {
		cout << "�������!" << endl;
	}
};

//ҵ����
void DoWork(AbstractDrinking*drink)
{
	drink->MakeDrink();
	delete drink;
}

void test01()
{
	DoWork(new Coffee);
	cout<<"------------"<<endl;
	DoWork(new Tea);
	
}


int main() {

    test01();
	system("pause");

	return 0;
}
