#include<iostream>
using namespace std;

int main1()
{
    //先对数字进行循环
    int num = 100;

    
    int a = 0; //个位
    int b = 0; //十位
    int c = 0; // 百位
    do
    {
        //分解数字
        a = num % 10;
        b = num / 10 % 10;
        c = num /100;
        //判断
        if(a*a*a + b*b*b + c*c*c == num)
        {
            cout<<num<<endl;
        }
        num ++;
        
    } while (num < 1000);
    


    system("pause");

    //从数字中找到水仙花
	return 0;

}