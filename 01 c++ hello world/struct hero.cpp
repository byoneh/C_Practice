#include<iostream>
using namespace std;
#include <string>
#include<ctime>

struct  hero 
{
	string name ;
	int age;
	string sex;
};

void ageBubble(hero sanguoArr[],int len)
{
	for(int i = 0; i < len -1; i++)
	{
		for(int j =0; j < len - i -1;j++)  //ð�������㷨���յĲ��� ��������д����
		{
			if(sanguoArr[j].age > sanguoArr[j+1].age)
			{
				hero temp = sanguoArr[j];
				sanguoArr[j] = sanguoArr[j+1];
				sanguoArr[j+1] = temp;

			}
		}
	}
}

void printsanguoArr(hero sanguoArr[],int len)
{
	for(int i = 0; i< len ; i++)
	{
	cout<<" Ӣ������:"<<sanguoArr[i].name<<"\t����:"<<sanguoArr[i].age<<"\t�Ա�:"<<sanguoArr[i].sex<<endl;
	}
}

int main3()
{
	//����һ����������Ӣ�۵Ľṹ�壬����ɳ�ʼ��
	hero	sanguoArr[5] ={
	
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	
	};
	//�����������ð������
	int len = sizeof(sanguoArr) / sizeof(sanguoArr[0]);
	ageBubble(sanguoArr,len);
	//��ӡ�����Ľṹ��
	printsanguoArr(sanguoArr,len);
	system("pause");
	return 0;
}