/*
 * @Description: char��ASCII
 * @Author: Andew
 * @Date: 2019-10-16 15:39:48
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-16 15:46:44
 */
//morechar.cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch = 'M';
    int i = ch;
    cout << ch << "��ASCII������" << i << endl;

    ch = ch + 1;
    i = ch;
    cout << "+1֮��ı�����" << i << ",��ĸ��" << ch << endl;

    cout << "ʹ��cout.put()������" << endl;
    cout.put(ch);
    cout.put('!');
    return 0;
}