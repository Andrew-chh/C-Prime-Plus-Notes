<!--
 * @Description: Chapter0304 算术运算符
 * @Author: Andew
 * @Date: 2019-10-21 14:06:38
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-24 10:19:46
 -->

# c++算术运算符

## 3.4.1 运算符的优先级和结合性

四则运算参考四则运算优先级，注意括号。

## 3.4.2 除法的默认类型转换和精度问题

```c++
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
```

上面的各种类型的除法其实是除法运算符的**重载**,这是OOP的一个重要概念
![除法重载](/Chapter03/images/除法重载.jpg)

## 3.4.3 求模运算%

求余数的

## 3.4.5 类型转换

1. 赋值/初始化时的类型转换

    * 如将一个short类型赋值给long类型，short类型会进行扩展，从而占用更多的字节，以达到long的长度。反之，将一个高精度的值(如double)赋值给低精度的值(如int)，会自动缩减长度导致精度降低。高精度赋值给低精度结果是不确定的。
    ![数值转换精度](/Chapter03/images/数值转换问题.jpg)
    * 此外，0赋值给bool会转为false，非0转为true

2. 使用{}初始化时的类型转换
    c++11中，可以使用{}进行列表初始化。{}初始化时，会在内部判断目标变量能否正确存储所赋予的值，如果不行，会被视为非法。比如:`float b {1}`中，b的类型float可以完整存下int类型的1，初始化合法。`int c {3.1415}`中，int类型的c要存入double3.1415是不够的，会发生精度损失，这里就是非法的。再如`double a {1}; int b {a}`也是合法的，因为int够存下1的有效位数，所以ok的(然而还是会有warning，但是程序猿不是都不看warning吗:yum:)。

3. 表达式中的类型转换
    * **整型提升(integral promotion)** 在进行表达式计算时，C++会将一些类型(bool\char\unsigned char\signed char\short)自动转换为int类型。如`short a = 20;short b = 10; short c = a + b`中，编辑器首先将获取a和b的值，并将其转化为int类型，进计算后，再转会short类型赋值给c。

    * 当表达式中涉及多种类型相加减时，会将较小的类型转化为较大的类型。

4. 传参时的类型转换
    由函数原型控制(Chapter07)

5. 强制类型转换
    * 显式强制类型转换:
        * (typeName) value ->继承自C语言的格式
        * typeName (value) —>c++版的强制类型转换
    * 四种强制类型转换符 (Chapter15)
        * static_cast
        * const_cast
        * dynamic_cast
        * reinterpret_cast

```c++
/*
 * @Description: Chapter0305类型转换
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
    auks = 19.99 + 11.99; // double to int
    bats = int(19.99) + (int)11.99; // int + int to int
    coots = (int)19.99 + int(11.99);
    cout << "auks = " << auks << ",bats= " << bats;
    cout << ", coots = " << coots << endl;

    char ch = 'z';  //ASCII编码 
    cout << "The code for " << ch << "is ";
    cout << int(ch) << endl;
    cout << "yes,the code is ";
    cout << static_cast<int>(ch) << endl;
    return 0;
}
```

6. auto声明的类型转换（Chapter09）
    `auto n = 100` n为int
    `auto x = 1.5` x为double
    `auto y = 13.e12L` y为long double
