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
	cout<<"学生姓名："<<name<<"\t学生学号："<<idCard<<endl;
	}


};

int main5()
{
Student stu1;
stu1.name= "小王";
stu1.idCard = "1201255";

stu1.showStudent();

system("pause");
return 0;


}