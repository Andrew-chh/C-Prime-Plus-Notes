/*
 * @Description: 除法
 * @Author: Andrew
 * @Date: 2019-10-21 14:44:38
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-21 14:58:17
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    // 整数除法默认结果类型为整数，直接舍弃小数点后
    cout << "整数除法:9/5: " << 9 / 5 << endl;
    // 浮点数除法结果为浮点数 （浮点数默认为double类型）
    cout << "浮点数除法:9.0/5.0: " << 9.0 / 5.0 << endl;
    // 浮点/整数中，c++会将整数转为浮点数（向高精度转）
    cout << "浮点/整数:9.0/5: " << 9.0 / 5 << endl;
    cout << "默认double浮点型除法:1e7/9.0: " << 1e7 / 9.0 << endl;
    // float不够长，精度不够结果不对
    cout << "强制float除法:1e7f/9.0f: " << 1e7f / 9.0f << endl;
    return 0;
}