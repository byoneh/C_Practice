#include<iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		cout<<"����person��Ĭ�Ϲ��캯��"<<endl;

	}
	Person(int a,int heigth)
	{
	cout<<"����person���вι��캯��"<<endl;
	m_heigth = new int(heigth);
	m_age = a;
	}
	Person (const Person & p)
	{
		m_age = p.m_age;
	m_heigth = new int(*p.m_heigth);
	cout<<"�����Լ������Ŀ�������"<<endl;
	
	}

	~Person()
	{ 

		if(m_heigth != NULL)
		{
		delete m_heigth;
		m_heigth = NULL;
		}
	cout<<"������������"<<endl;
	}


	int m_age ;
	int *m_heigth;



};

void test()
{
	Person p2(18,20);
	cout<<"p������"<<p2.m_age<<"���"<<*p2.m_heigth<<endl;
	Person p1(p2);
	cout<<"p1������"<<p1.m_age<<"���"<<*p1.m_heigth<<endl;
}

int main006()
{

test();

system("pause");
return 0;
}