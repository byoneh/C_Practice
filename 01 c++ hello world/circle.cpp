#include<iostream>
using namespace std;
//����һ������
class Point
{
public:
	//���õ�
	void setX(int x)
	{
		m_X = x;
	}
	void setY(int y)
	{
		m_Y = y;
	}
	//��ȡ��
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


//����һ��Բ��
class Circle
{
public:
	//���ð뾶
	void setR(int r)
	{
	m_r = r;
	}
	//��ȡ�뾶
	int getR()
	{
	return m_r;
	}
	//����Բ������
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


//�жϵ���Բ��λ�ù�ϵ

void isCaclulate(Circle &c,Point&p)
{
//����Բ�ĵ����λ��
	int rCenter = (c.getCenter().getX()- p.getX())*(c.getCenter().getX()- p.getX()) + (c.getCenter().getY()- p.getY())*(c.getCenter().getY()- p.getY());
	int rr = c.getR()*c.getR();
	if (rCenter == rr)
	{
	cout<<"����Բ�ϡ�"<<endl;

	}
	else if (rCenter > rr)
	{
		cout<<"����Բ�⡣"<<endl;

	}
	else
	{
	cout<<"����Բ�ڡ�"<<endl;
	}

}



int main6()
{
	//����Բ
	Circle c1;
	c1.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c1.setCenter(center);


	//���õ�
	Point p ;
	p.setX(10);
	p.setY(11);
	isCaclulate(c1,p);


system("pause");
return 0;
}
