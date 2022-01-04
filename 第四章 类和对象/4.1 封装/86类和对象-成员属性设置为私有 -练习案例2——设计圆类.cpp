#include<iostream>
using namespace std;

//类和对象-成员属性设置为私有
//练习案例2——设计圆类

//点类
class Point
{
public:
	//设置X
	void setX(int x)
	{
		m_X=x;
	} 
	//获取X
	int getX()
	{
		return m_X;
	} 
	//设置Y
	void setY(int y)
	{
		m_Y=y;
	} 
	//获取Y
	int getY()
	{
		return m_Y;
	} 
private:
	int m_X;
	int m_Y;
}; 

//圆类 
class circle
{
public:
	//设置半径
	void setR(int r)
	{
		m_R=r;
	}
	//获取半径
	int getR()
	{
		return m_R;
	}
	//设置圆心
	void setCenter(Point center)
	{
		m_Center=center;
	}
	//获取半径
	Point getCenter()
	{
		return m_Center;
	}  

 
private:
	int m_R;  //半径 
	Point m_Center;  //圆心 
};

//判断点和圆关系
void isInCircle(circle &c ,Point &p)
{
	//计算两点之间距离平方
	int distance =
    (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
    (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
    
    //计算半径的平方
	int rDistance = c.getR() * c.getR();
	
	//判断关系
	if (distance == rDistance)
	{
	cout <<"点在圆上"<< endl;
	}
	else if (distance > rDistance)
	{
	cout <<"点在圆外"<<endl;
	}
	else
	{
	cout <<"点在圆内"<< endl;
	}	
}

int main() {

    //创建圆 
	circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center) ;
	
	//创建点
	Point p;
	p.setX(10);
	p.setY(2);  //小于10  点在圆内 
	
	//判断关系
	isInCircle(c,p);
	
	
	
	system("pause");

	return 0;
}
