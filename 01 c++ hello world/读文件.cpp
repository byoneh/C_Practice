#include<iostream>	
using namespace std;
#include<fstream>
#include<string>
void test07()
{
	//创建读对象

	fstream ifs;
	//打开并判断文件是否成功
	ifs.open("test7.txt",ios::in);

	if(!ifs.is_open())
	{
	cout<<"失败了打开！"<<endl;
	return;
	}
	//读取内容
	//第一种读取方式
	/*char buf[1024] = {0};
	while (ifs>>buf)
	{
		cout<<buf<<endl;
	}*/
	//第二种读取方式
	/*char buf[1024] ={0};
	while (ifs.getline(buf,sizeof(buf)))
	{
		cout<<buf<<endl;
	}
*/
	//第三种 读取方式

	/*string buf;
	while(getline(ifs,buf))
	{
		cout<<buf<<endl;
	}
	
	ifs.close();*/

	//第四种 读取方式
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout<<c;
	}



}

int main()
{
test07();
system("pause");
return 0;



}