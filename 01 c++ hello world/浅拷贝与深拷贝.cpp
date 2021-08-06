#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout<<"这是person的默认构造函数"<<endl;

	}
	Person(int a,int heigth)
	{
	cout<<"这是person的有参构造函数"<<endl;
	m_heigth = new int(heigth);
	m_age = a;
	}
	Person (const Person & p)
	{
		m_age = p.m_age;
	m_heigth = new int(*p.m_heigth);
	cout<<"这是自己创建的拷贝函数"<<endl;
	
	}

	~Person()
	{ 

		if(m_heigth != NULL)
		{
		delete m_heigth;
		m_heigth = NULL;
		}
	cout<<"这是析构函数"<<endl;
	}


	int m_age ;
	int *m_heigth;



};

void test()
{
	Person p2(18,20);
	cout<<"p的年龄"<<p2.m_age<<"身高"<<*p2.m_heigth<<endl;
	Person p1(p2);
	cout<<"p1的年龄"<<p1.m_age<<"身高"<<*p1.m_heigth<<endl;
}

int main006()
{

test();

system("pause");
return 0;
}