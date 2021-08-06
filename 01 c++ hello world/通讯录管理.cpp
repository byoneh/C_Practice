#include<iostream>
using namespace std;
#include<string>

struct  Person
{
	string m_name;
	int m_age;
	int m_sex;
	string m_phoneNumber;
	
};
struct abs
{
	int sizeMax;
	struct Person arr[1000];
};

void showMenu()
{
cout<<"******************************************菜单**************************************************\n"
	"*************1.- 添加联系人：向通讯录中添加新人\n"
    "*************2.- 显示联系人：显示通讯录中所有联系人信息\n"
	"*************3.- 删除联系人：按照姓名进行删除指定联系人\n"
	"*************4.- 查找联系人：按照姓名查看指定联系人信息\n"
	"*************5.- 修改联系人：按照姓名重新修改指定联系人\n"
	"*************6.- 清空联系人：清空通讯录中所有信息\n"
	"*************0.- 退出通讯录：退出当前使用的通讯录\n "
	"****************************************************************************************************"
	<<endl;
}

//1.- 添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）最多记录1000人
void addPerson(struct abs * pot )
{
	if(pot->sizeMax == 1000)
	{
	cout<<"通讯录已满！请删除后再进行操作。"<<endl;
	}
	else
	{
		cout<<"请输入姓名："<<endl;//姓名
		string namecan;
		cin>>namecan;
		pot->arr[pot->sizeMax].m_name = namecan;
		//年龄
		cout<<"请输入年龄："<<endl;
		int age;
		cin>>age;
		pot->arr[pot->sizeMax].m_age = age;
		//性别
		cout<<"请输入性别："<<endl;
		cout<<"1 ------男"<<endl;
		cout<<"2 ------女"<<endl;

		
		
		int a =0 ;
		while(true)
		{
			
			cin>>a;
			if (cin.fail())
			{
			cout<<"你输入的数据非法！请输入整型！"<<endl;
			cin.clear();
			cin.ignore();
			a=0;
			continue;
			}
			else
			{
				if(a == 1 || a == 2 )
				{
				pot->arr[pot->sizeMax].m_sex = a;
				break;
				}
				else
				{
				cout<<"输入有误，请重新输入"<<endl;
			
				}
			}
			
		}
		//电话号码
		cout<<"请输入电话号码："<<endl;
		string number;
		cin>>number;
		pot->arr[pot->sizeMax].m_phoneNumber = number;

		//指标增加1
		pot->sizeMax++;
		cout<<"添加成功"<<endl;
		cout<<"存储数量="<<pot->sizeMax<<endl;
		system("pause");
		system("cls");
	
	}
	
	
}

//2.- 显示联系人：显示通讯录中所有联系人信息
void showPerson(struct abs * pot)
{
	if(pot->sizeMax == 0)
	{
	cout<<"暂时没有存储信息"<<endl;
	}
	else
	{
		for(int i = 0 ; i< pot->sizeMax;i++)
		{
			cout<<"姓名:"<<pot->arr[i].m_name<<"\t";
			cout<<"年龄:"<<pot->arr[i].m_age<<"\t";
			cout<<"性别:"<<(pot->arr[i].m_sex == 1? "男":"女")<<"\t";
			cout<<"电话号码:"<<pot->arr[i].m_phoneNumber<<"\t";
			cout<<endl;

			
			
		}
	}
	system("pause");
	system("cls");


}

//3.- 删除联系人：按照姓名进行删除指定联系人
//判断这个人是否存在 存在返回位置 否则返回-1
int isExise(struct abs * pot,string name1)
{
	for(int i = 0; i < pot->sizeMax;i++)
	{
		if(name1 == pot->arr[i].m_name)
		{
			return i;
		}
		
	}
	return -1;

}

void deletePerson(struct abs * pot,string name1)
{

	int ret =isExise(pot,name1);

	if(isExise(pot,name1) == -1)
	{
	cout<<"查无此人"<<endl;
	}
	else
	{
		
		for(int i = ret ; i < pot->sizeMax; i++)
		{
			pot->arr[i] = pot->arr[i+1];
			cout<<"删除成功"<<endl;
		}
		pot->sizeMax --;

	}
	system("pause");
	system("cls");

}

//4.- 查找联系人：按照姓名查看指定联系人信息

void findPerson(struct abs * pot, string name)
{
	int ret = isExise(pot , name);
	if(ret == -1)
	{
	cout<<"没有找到该联系人"<<endl;
	}
	else
	{
	cout<<"姓名:"<<pot->arr[ret].m_name<<"\t";
			cout<<"年龄:"<<pot->arr[ret].m_age<<"\t";
			cout<<"性别:"<<(pot->arr[ret].m_sex == 1? "男":"女")<<"\t";
			cout<<"电话号码:"<<pot->arr[ret].m_phoneNumber<<"\t";
			cout<<endl;
	}
	system("pause");
	system("cls");
}

//5.- 修改联系人：按照姓名重新修改指定联系人
void modifyPerson(struct abs *pot , string name)
{
	int r = isExise(pot ,name);
	if(r == -1)
	{
	cout<<"要修改的人不存在"<<endl;
	}
	else
	{
		cout<<"请输入姓名："<<endl;//姓名
		string namecan;
		cin>>namecan;
		pot->arr[r].m_name = namecan;
		//年龄
		cout<<"请输入年龄："<<endl;
		int age;
		cin>>age;
		pot->arr[r].m_age = age;
		//性别
		cout<<"请输入性别："<<endl;
		cout<<"1 ------男"<<endl;
		cout<<"2 ------女"<<endl;

		
		
		int a =0 ;
		while(true)
		{
			
			cin>>a;
			if (cin.fail())
			{
			cout<<"你输入的数据非法！请输入整型！"<<endl;
			cin.clear();
			cin.ignore();
			a=0;
			continue;
			}
			else
			{
				if(a == 1 || a == 2 )
				{
				pot->arr[r].m_sex = a;
				break;
				}
				else
				{
				cout<<"输入有误，请重新输入"<<endl;
			
				}
			}
			
		}
		//电话号码
		cout<<"请输入电话号码："<<endl;
		string number;
		cin>>number;
		pot->arr[r].m_phoneNumber = number;
	}

system("pause");
system("cls");
}


int main4()
{
	struct abs pot;
	pot.sizeMax = 0;
	

	//系统框架
	int selcet;
while(true)
{

	//显示菜单界面
	showMenu();
	cout<<"请输入要选择的功能呢"<<endl;

cin>>selcet;
switch (selcet)
{
	
case 1://1.- 添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）最多记录1000人
	addPerson(& pot);
	break;
case 2://2.- 显示联系人：显示通讯录中所有联系人信息
	showPerson(& pot);
	break;
case 3://3.- 删除联系人：按照姓名进行删除指定联系人
	{string name;
	cout<<"请输入想要删除的联系人姓名"<<endl;
	cin>>name;
	deletePerson(&pot , name);
	
	

	break;
	}
case 4://4.- 查找联系人：按照姓名查看指定联系人信息
	{
	string name;
	cout<<"请输入想要查找的联系人姓名"<<endl;
	cin>>name;
	findPerson(&pot , name);
	break;
	}
case 5://5.- 修改联系人：按照姓名重新修改指定联系人
	{
	string name;
	cout<<"请输入想要修改的联系人姓名"<<endl;
	cin>>name;
	modifyPerson(&pot , name);
	break;
	}
case 6://6.- 清空联系人：清空通讯录中所有信息
	{
	pot.sizeMax = 0;
	cout<<"清空成功！"<<endl;
	system("pause");
	system("cls");
	break;
	}
case 0:
	cout<<"欢迎下次使用"<<endl;
	break;
	

default:
	break;
}



}

//system("pause");
return 0;
}