/*
 * @Description: Chapter0305ÀàÐÍ×ª»»
 * @Author: Andew
 * @Date: 2019-10-24 10:00:29
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-24 10:06:57
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int auks, bats, coots;
    auks = 19.99 + 11.99;           // double to int
    bats = int(19.99) + (int)11.99; // int + int to int
    coots = (int)19.99 + int(11.99);
    cout << "auks = " << auks << ",bats= " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'z';
    cout << "The code for " << ch << "is ";
    cout << int(ch) << endl;
    cout << "yes,the code is ";
    cout << static_cast<int>(ch) << endl;
    return 0;
}