#include<iostream>
using namespace std;

//��Ͷ���-��Ա��������Ϊ˽��
//��ϰ����2�������Բ��

//����
class Point
{
public:
	//����X
	void setX(int x)
	{
		m_X=x;
	} 
	//��ȡX
	int getX()
	{
		return m_X;
	} 
	//����Y
	void setY(int y)
	{
		m_Y=y;
	} 
	//��ȡY
	int getY()
	{
		return m_Y;
	} 
private:
	int m_X;
	int m_Y;
}; 

//Բ�� 
class circle
{
public:
	//���ð뾶
	void setR(int r)
	{
		m_R=r;
	}
	//��ȡ�뾶
	int getR()
	{
		return m_R;
	}
	//����Բ��
	void setCenter(Point center)
	{
		m_Center=center;
	}
	//��ȡ�뾶
	Point getCenter()
	{
		return m_Center;
	}  

 
private:
	int m_R;  //�뾶 
	Point m_Center;  //Բ�� 
};

//�жϵ��Բ��ϵ
void isInCircle(circle &c ,Point &p)
{
	//��������֮�����ƽ��
	int distance =
    (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
    (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
    
    //����뾶��ƽ��
	int rDistance = c.getR() * c.getR();
	
	//�жϹ�ϵ
	if (distance == rDistance)
	{
	cout <<"����Բ��"<< endl;
	}
	else if (distance > rDistance)
	{
	cout <<"����Բ��"<<endl;
	}
	else
	{
	cout <<"����Բ��"<< endl;
	}	
}

int main() {

    //����Բ 
	circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center) ;
	
	//������
	Point p;
	p.setX(10);
	p.setY(2);  //С��10  ����Բ�� 
	
	//�жϹ�ϵ
	isInCircle(c,p);
	
	
	
	system("pause");

	return 0;
}
