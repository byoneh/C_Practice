#include<iostream>	
using namespace std;
#include<fstream>

void test7()
{
	fstream ofs;
	ofs.open("test7.txt",ios::out);
	ofs<<"�㿴��д�ĺÿ���"<<endl;
	ofs<<"�ÿ�Ҳ������Ǯ����ʲô��";
	ofs.close();



}

int main001()
{
test7();
system("pause");
return 0;



}