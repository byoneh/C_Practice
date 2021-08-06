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
cout<<"******************************************�˵�**************************************************\n"
	"*************1.- �����ϵ�ˣ���ͨѶ¼���������\n"
    "*************2.- ��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ\n"
	"*************3.- ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��\n"
	"*************4.- ������ϵ�ˣ����������鿴ָ����ϵ����Ϣ\n"
	"*************5.- �޸���ϵ�ˣ��������������޸�ָ����ϵ��\n"
	"*************6.- �����ϵ�ˣ����ͨѶ¼��������Ϣ\n"
	"*************0.- �˳�ͨѶ¼���˳���ǰʹ�õ�ͨѶ¼\n "
	"****************************************************************************************************"
	<<endl;
}

//1.- �����ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ������¼1000��
void addPerson(struct abs * pot )
{
	if(pot->sizeMax == 1000)
	{
	cout<<"ͨѶ¼��������ɾ�����ٽ��в�����"<<endl;
	}
	else
	{
		cout<<"������������"<<endl;//����
		string namecan;
		cin>>namecan;
		pot->arr[pot->sizeMax].m_name = namecan;
		//����
		cout<<"���������䣺"<<endl;
		int age;
		cin>>age;
		pot->arr[pot->sizeMax].m_age = age;
		//�Ա�
		cout<<"�������Ա�"<<endl;
		cout<<"1 ------��"<<endl;
		cout<<"2 ------Ů"<<endl;

		
		
		int a =0 ;
		while(true)
		{
			
			cin>>a;
			if (cin.fail())
			{
			cout<<"����������ݷǷ������������ͣ�"<<endl;
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
				cout<<"������������������"<<endl;
			
				}
			}
			
		}
		//�绰����
		cout<<"������绰���룺"<<endl;
		string number;
		cin>>number;
		pot->arr[pot->sizeMax].m_phoneNumber = number;

		//ָ������1
		pot->sizeMax++;
		cout<<"��ӳɹ�"<<endl;
		cout<<"�洢����="<<pot->sizeMax<<endl;
		system("pause");
		system("cls");
	
	}
	
	
}

//2.- ��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
void showPerson(struct abs * pot)
{
	if(pot->sizeMax == 0)
	{
	cout<<"��ʱû�д洢��Ϣ"<<endl;
	}
	else
	{
		for(int i = 0 ; i< pot->sizeMax;i++)
		{
			cout<<"����:"<<pot->arr[i].m_name<<"\t";
			cout<<"����:"<<pot->arr[i].m_age<<"\t";
			cout<<"�Ա�:"<<(pot->arr[i].m_sex == 1? "��":"Ů")<<"\t";
			cout<<"�绰����:"<<pot->arr[i].m_phoneNumber<<"\t";
			cout<<endl;

			
			
		}
	}
	system("pause");
	system("cls");


}

//3.- ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��
//�ж�������Ƿ���� ���ڷ���λ�� ���򷵻�-1
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
	cout<<"���޴���"<<endl;
	}
	else
	{
		
		for(int i = ret ; i < pot->sizeMax; i++)
		{
			pot->arr[i] = pot->arr[i+1];
			cout<<"ɾ���ɹ�"<<endl;
		}
		pot->sizeMax --;

	}
	system("pause");
	system("cls");

}

//4.- ������ϵ�ˣ����������鿴ָ����ϵ����Ϣ

void findPerson(struct abs * pot, string name)
{
	int ret = isExise(pot , name);
	if(ret == -1)
	{
	cout<<"û���ҵ�����ϵ��"<<endl;
	}
	else
	{
	cout<<"����:"<<pot->arr[ret].m_name<<"\t";
			cout<<"����:"<<pot->arr[ret].m_age<<"\t";
			cout<<"�Ա�:"<<(pot->arr[ret].m_sex == 1? "��":"Ů")<<"\t";
			cout<<"�绰����:"<<pot->arr[ret].m_phoneNumber<<"\t";
			cout<<endl;
	}
	system("pause");
	system("cls");
}

//5.- �޸���ϵ�ˣ��������������޸�ָ����ϵ��
void modifyPerson(struct abs *pot , string name)
{
	int r = isExise(pot ,name);
	if(r == -1)
	{
	cout<<"Ҫ�޸ĵ��˲�����"<<endl;
	}
	else
	{
		cout<<"������������"<<endl;//����
		string namecan;
		cin>>namecan;
		pot->arr[r].m_name = namecan;
		//����
		cout<<"���������䣺"<<endl;
		int age;
		cin>>age;
		pot->arr[r].m_age = age;
		//�Ա�
		cout<<"�������Ա�"<<endl;
		cout<<"1 ------��"<<endl;
		cout<<"2 ------Ů"<<endl;

		
		
		int a =0 ;
		while(true)
		{
			
			cin>>a;
			if (cin.fail())
			{
			cout<<"����������ݷǷ������������ͣ�"<<endl;
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
				cout<<"������������������"<<endl;
			
				}
			}
			
		}
		//�绰����
		cout<<"������绰���룺"<<endl;
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
	

	//ϵͳ���
	int selcet;
while(true)
{

	//��ʾ�˵�����
	showMenu();
	cout<<"������Ҫѡ��Ĺ�����"<<endl;

cin>>selcet;
switch (selcet)
{
	
case 1://1.- �����ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ������¼1000��
	addPerson(& pot);
	break;
case 2://2.- ��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
	showPerson(& pot);
	break;
case 3://3.- ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��
	{string name;
	cout<<"��������Ҫɾ������ϵ������"<<endl;
	cin>>name;
	deletePerson(&pot , name);
	
	

	break;
	}
case 4://4.- ������ϵ�ˣ����������鿴ָ����ϵ����Ϣ
	{
	string name;
	cout<<"��������Ҫ���ҵ���ϵ������"<<endl;
	cin>>name;
	findPerson(&pot , name);
	break;
	}
case 5://5.- �޸���ϵ�ˣ��������������޸�ָ����ϵ��
	{
	string name;
	cout<<"��������Ҫ�޸ĵ���ϵ������"<<endl;
	cin>>name;
	modifyPerson(&pot , name);
	break;
	}
case 6://6.- �����ϵ�ˣ����ͨѶ¼��������Ϣ
	{
	pot.sizeMax = 0;
	cout<<"��ճɹ���"<<endl;
	system("pause");
	system("cls");
	break;
	}
case 0:
	cout<<"��ӭ�´�ʹ��"<<endl;
	break;
	

default:
	break;
}



}

//system("pause");
return 0;
}