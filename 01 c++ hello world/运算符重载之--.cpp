#include<iostream>
using namespace std;


class MyInter
{
friend ostream& operator<<(ostream & cout,MyInter &myint);
public:
	MyInter()
	{
	 m_num = 0;
	}
	//前置➖➖
	MyInter& operator--()
	{
	--this->m_num;

	return *this;
	}
	//后置减减
	MyInter operator--(int)
	{
	//先记录当前数值
		MyInter myint = *this;
	//将当前数值减一
		m_num -- ;

	//返回记录的数值
		
		return myint;
	
	}




private:

	int m_num;


};

ostream& operator<<(ostream & cout,MyInter &myint)
{
cout<<myint.m_num;
return cout;

}



void test01()
{
MyInter myint;
//cout<<--(--myint)<<endl;
//cout<<myint;

cout<<myint--<<endl;
cout<<myint<<endl;
cout<<(myint--)--<<endl;
cout<<myint<<endl;


}





int main7()
{
	test01();

	system("pause");
	return 0;
}