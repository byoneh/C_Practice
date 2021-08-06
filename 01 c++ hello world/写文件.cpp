#include<iostream>	
using namespace std;
#include<fstream>

void test7()
{
	fstream ofs;
	ofs.open("test7.txt",ios::out);
	ofs<<"你看我写的好看不"<<endl;
	ofs<<"好看也不收你钱！怕什么。";
	ofs.close();



}

int main001()
{
test7();
system("pause");
return 0;



}