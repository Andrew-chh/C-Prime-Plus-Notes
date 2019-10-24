/*
 * @Description: 浮点数精度问题
 * @Author: Andew
 * @Date: 2019-10-21 11:03:29
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-21 14:45:53
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //原cout输出函数会默认不输出最后的0，使用cout.setf()来指定输出格式
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    // tub和mint的原始值都应该是3.33333333333333333333333.....
    // 然鹅float只保证7位有效位，也就是在7位内还是正确的
    cout << "tub = " << tub << endl;
    // 所以这里*million超过了float的精度，就会出错
    cout << "a million tub = " << million * tub << endl;
    // 同样，*的数字越大，错误越明显
    cout << "ten million tubs = " << 10 * million * tub << endl;
    // double有15位有效位，所以15位之内精度都保证。这就是为什么double比float精度高。
    // 底层原理可以查看float和double在内存中的结构
    cout << "mint = " << mint << endl;
    cout << "million mint = " << million * mint << endl;
    return 0;
}