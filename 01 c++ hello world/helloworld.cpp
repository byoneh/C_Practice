#include<iostream>
using namespace std;

int main1()
{
    //�ȶ����ֽ���ѭ��
    int num = 100;

    
    int a = 0; //��λ
    int b = 0; //ʮλ
    int c = 0; // ��λ
    do
    {
        //�ֽ�����
        a = num % 10;
        b = num / 10 % 10;
        c = num /100;
        //�ж�
        if(a*a*a + b*b*b + c*c*c == num)
        {
            cout<<num<<endl;
        }
        num ++;
        
    } while (num < 1000);
    


    system("pause");

    //���������ҵ�ˮ�ɻ�
	return 0;

}