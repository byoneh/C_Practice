#include<iostream>
using namespace std;
#include <string>
#include<ctime>

struct t_student
	{
		string name;
		int score;
	};
struct teacher
	{
		string name;

	    t_student student_array[5];

	};
void allocaspace(teacher tArray[],int len)
{
	string tname = "Teacher_";
	string sname = "Student_";
	string nameseed ="ABCDE";

	for(int i = 0 ; i< len; i++)
	{
		tArray[i].name = tname + nameseed[i];
		for (int j = 0 ; j < 5; j++)
		{
			
			tArray[i].student_array[j].name = sname + nameseed[j];
			tArray[i].student_array[j].score = rand() % 61 +40;

		}

	}


}

void printteacher(teacher tAarry[],int len)
{
	for(int i = 0 ; i < len; i++)
	{
	cout<<"老师的姓名："<<tAarry[i].name<<endl;
	for(int j = 0 ; j < 5 ;j++)
	{
	cout<<"\t学生的姓名"<<tAarry[i].student_array[j].name<<"学生的分数："<<tAarry[i].student_array[j].score<<endl;
	
	}
	}
}

int main2()
{
	srand(unsigned int(time(NULL)));
	//1. 创建三名老师的数据结构
	teacher tAarry[3];
	//2. 用函数给三名老师赋值，并同时给5名学生赋
	int len = sizeof(tAarry) /sizeof(tAarry[0]);
	allocaspace(tAarry, len);//这里tarry是该数组的首地址
	//3. 通过函数打印这些数据
	printteacher(tAarry,len);

	


	system("pause");
	return 0;

}