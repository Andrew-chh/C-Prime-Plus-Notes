/*
 * @Description: 
 * @Author: Andew
 * @Date: 2019-10-21 15:36:11
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-29 16:06:07
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    const int b = 20;
    const int *p = &a;
    const int *q = &b;
    //   *p = 11;   报错，不能通过指针修改。
    cout << *p << " - " << *q << endl;
    q = p;
    a = 30;
    cout << *p << " - " << *q << endl;
    /* 解释：
        const int *q 指的是指向的地址可以改，指向的值不能改(*p=11非法).
        const 修饰的目标是int *q，也就是q所指向的值，所以再给q赋值是非法的。
        const int *q可以指向变量或常量，然而不能通过q这个指针去修改指向的值，
        但是如果指向的是一个变量，变量本身是可以重新赋值的，只是不能通过指针去修改。  
    */

    int *const x = &a;
    // int *const y = &b;   报错，不能指向常量
    int c = 11;
    // x = &c;   报错，常量地址不能修改
    cout << *p << " - " << *q << endl;
    /* 解释：
        int * const x 表示x地址是一个常量，它必须指向一个固定的地址。但是地址里面
        的值是可以改变的，所以int * const x不能指向一个常量。它只是限制你的地址不能
        改变而已。
    */

    const int test1 = 1;
    const int test2 = 2;
    int test3 = 3;
    int test4 = 4;

    int &ref = test3;
    ref += 1;
    cout << test3 << endl;
    //1.引用修改非const对象的值

    const int &t1 = test1;
    cout << t1 << endl;
    // 2.t1 = test2;  报错，const引用无法修改（read only)

    const int &t3 = test3;
    cout << t3 << endl;
    test3 += 1;
    cout << t3 << endl;
    // t3 += 1; // 错误，引用本身无法修改
    // 3.可以指向非const变量,非const变量可以修改。

    // 4.int &t4 = test2; 报错，非const引用无法指向const常量

    double test5 = 5.0;
    // int &t5 = test5; 报错，无法用 "double" 类型的值初始化 "int &" 类型的引用
    const int &t5 = test5;
    cout << t5 << endl;
    // 5. 非const变量只能绑定到同类型的引用中，const变量可以绑定不同但相关的类型
}