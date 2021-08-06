#include<iostream>
using namespace std;
//创建一个点类
class Point
{
public:
	//设置点
	void setX(int x)
	{
		m_X = x;
	}
	void setY(int y)
	{
		m_Y = y;
	}
	//获取点
	int getX()
	{
	return m_X;
	}
	int getY()
	{
	return m_Y;
	}




private:
	int m_X;
	int m_Y;
};


//创建一个圆类
class Circle
{
public:
	//设置半径
	void setR(int r)
	{
	m_r = r;
	}
	//获取半径
	int getR()
	{
	return m_r;
	}
	//设置圆心坐标
	void setCenter(Point &center)
	{
	m_center = center;
	}
	Point getCenter()
	{
		return m_center;	
	}
	

private:
	int m_r;
	Point m_center;

};


//判断点与圆的位置关系

void isCaclulate(Circle &c,Point&p)
{
//计算圆心到点的位置
	int rCenter = (c.getCenter().getX()- p.getX())*(c.getCenter().getX()- p.getX()) + (c.getCenter().getY()- p.getY())*(c.getCenter().getY()- p.getY());
	int rr = c.getR()*c.getR();
	if (rCenter == rr)
	{
	cout<<"点在圆上。"<<endl;

	}
	else if (rCenter > rr)
	{
		cout<<"点在圆外。"<<endl;

	}
	else
	{
	cout<<"点在圆内。"<<endl;
	}

}



int main6()
{
	//设置圆
	Circle c1;
	c1.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c1.setCenter(center);


	//设置点
	Point p ;
	p.setX(10);
	p.setY(11);
	isCaclulate(c1,p);


system("pause");
return 0;
}
