/*
 * @Description: 进制转换
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

    cout << "十进制的 42:" << a << endl;
    cout << "十六进制的 0x42:" << b << endl;
    cout << "八进制的 042:" << c << endl;

    int d = 42;
    cout << "42转十六进制: " << hex << d << endl;
    cout << "42转8进制: " << oct << d << endl;

    char buff[20] = "1239271";
    char *stop;
    cout << "转化为八进制结果： " << strtol(buff, &stop, 8) << endl;
    cout << "转化为十六进制结果： " << strtol(buff, &stop, 16) << endl;

    int num = 99;
    char str[100];
    itoa(99, str, 8);
    cout << "99转化为八进制" << str << endl;
    itoa(99, str, 16);
    cout << "99转化为十六进制" << str << endl;

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