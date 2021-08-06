#include <iostream>
using namespace std;

class abstractBase
{
public:
	virtual void func() =0;
	

};

class son:public abstractBase
{
public:
	void func()
	{
	cout<<"miou,miou"<<endl;
	}
};

void test05()
{
abstractBase * abc  = new son;
abc->func();



}


int main06()
{
test05();


system("pause");
return 0;


}