/*
 * @Description: 
 * @Author: Andew
 * @Date: 2019-10-14 10:47:56
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-14 11:02:03
 */
// lismits.cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n_8_int = INT8_MAX;
    int n_16_int = INT16_MAX;
    int n_32_int = INT32_MAX;
    int n_64_int = INT64_MAX;
    int n_int = INT_MAX;

    short n_short = SHRT_MAX;
    cout << "int 在不同机器上的大小：" << endl;
    cout << "8位" << n_8_int << endl;
    cout << "16位" << n_16_int << endl;
    cout << "32位" << n_32_int << endl;
    cout << "64位" << n_64_int << endl;
    cout << "本机" << n_int << endl;
    return 0;
}