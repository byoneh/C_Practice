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
	cout<<"��ʦ��������"<<tAarry[i].name<<endl;
	for(int j = 0 ; j < 5 ;j++)
	{
	cout<<"\tѧ��������"<<tAarry[i].student_array[j].name<<"ѧ���ķ�����"<<tAarry[i].student_array[j].score<<endl;
	
	}
	}
}

int main2()
{
	srand(unsigned int(time(NULL)));
	//1. ����������ʦ�����ݽṹ
	teacher tAarry[3];
	//2. �ú�����������ʦ��ֵ����ͬʱ��5��ѧ����
	int len = sizeof(tAarry) /sizeof(tAarry[0]);
	allocaspace(tAarry, len);//����tarry�Ǹ�������׵�ַ
	//3. ͨ��������ӡ��Щ����
	printteacher(tAarry,len);

	


	system("pause");
	return 0;

}