/*
 * @Description: char与ASCII
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
    cout << ch << "的ASCII编码是" << i << endl;

    ch = ch + 1;
    i = ch;
    cout << "+1之后的编码是" << i << ",字母是" << ch << endl;

    cout << "使用cout.put()函数：" << endl;
    cout.put(ch);
    cout.put('!');
    return 0;
}