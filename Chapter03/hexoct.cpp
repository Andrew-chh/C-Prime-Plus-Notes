/*
 * @Description: ����ת��
 * @Author: Andew
 * @Date: 2019-10-14 16:18:57
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-16 15:21:42
 */
//hexoct.cpp
#include <bits/stdc++.h>
using namespace std;

void change_to_binary(int);

int main()
{
    int a = 42;
    int b = 0x42;
    int c = 042;

    cout << "ʮ���Ƶ� 42:" << a << endl;
    cout << "ʮ�����Ƶ� 0x42:" << b << endl;
    cout << "�˽��Ƶ� 042:" << c << endl;

    int d = 42;
    cout << "42תʮ������: " << hex << d << endl;
    cout << "42ת8����: " << oct << d << endl;

    char buff[20] = "1239271";
    char *stop;
    cout << "ת��Ϊ�˽��ƽ���� " << strtol(buff, &stop, 8) << endl;
    cout << "ת��Ϊʮ�����ƽ���� " << strtol(buff, &stop, 16) << endl;

    int num = 99;
    char str[100];
    itoa(99, str, 8);
    cout << "99ת��Ϊ�˽���" << str << endl;
    itoa(99, str, 16);
    cout << "99ת��Ϊʮ������" << str << endl;

    change_to_binary(10);

    return 0;
}

void change_to_binary(int value)
{
    for (int i = 32; i >= 0; i--)
    {
        if (value & (1 << i))
            cout << "1";
        else
        {
            cout << "0";
        }
    }
    cout << endl;
}