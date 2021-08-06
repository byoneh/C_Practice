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
		for(int j =0; j < len - i -1;j++)  //冒泡排序算法掌握的不行 我再这里写错了
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
	cout<<" 英雄名称:"<<sanguoArr[i].name<<"\t年龄:"<<sanguoArr[i].age<<"\t性别:"<<sanguoArr[i].sex<<endl;
	}
}

int main3()
{
	//创建一个包含五名英雄的结构体，并完成初始化
	hero	sanguoArr[5] ={
	
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	
	};
	//依据年龄进行冒泡排序
	int len = sizeof(sanguoArr) / sizeof(sanguoArr[0]);
	ageBubble(sanguoArr,len);
	//打印排序后的结构体
	printsanguoArr(sanguoArr,len);
	system("pause");
	return 0;
}