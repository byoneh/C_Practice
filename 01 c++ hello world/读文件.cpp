#include<iostream>	
using namespace std;
#include<fstream>
#include<string>
void test07()
{
	//����������

	fstream ifs;
	//�򿪲��ж��ļ��Ƿ�ɹ�
	ifs.open("test7.txt",ios::in);

	if(!ifs.is_open())
	{
	cout<<"ʧ���˴򿪣�"<<endl;
	return;
	}
	//��ȡ����
	//��һ�ֶ�ȡ��ʽ
	/*char buf[1024] = {0};
	while (ifs>>buf)
	{
		cout<<buf<<endl;
	}*/
	//�ڶ��ֶ�ȡ��ʽ
	/*char buf[1024] ={0};
	while (ifs.getline(buf,sizeof(buf)))
	{
		cout<<buf<<endl;
	}
*/
	//������ ��ȡ��ʽ

	/*string buf;
	while(getline(ifs,buf))
	{
		cout<<buf<<endl;
	}
	
	ifs.close();*/

	//������ ��ȡ��ʽ
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