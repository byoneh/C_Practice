#include<iostream>
using namespace std;
#include <string>

struct  stu 
{
string name;
string idCard;
};

class Student
{
public:

	string name;
	string idCard;
	

	void showStudent()
	{
	cout<<"ѧ��������"<<name<<"\tѧ��ѧ�ţ�"<<idCard<<endl;
	}


};

int main5()
{
Student stu1;
stu1.name= "С��";
stu1.idCard = "1201255";

stu1.showStudent();

system("pause");
return 0;


}