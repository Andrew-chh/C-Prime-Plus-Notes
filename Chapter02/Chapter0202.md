<!--
 * @Description: 
 * @Author: Andew
 * @Date: 2019-10-12 10:03:08
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-12 11:37:23
 -->

# C++语句

## 2.11 声明语句和变量

示例程序：

```c++
// carrots.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int carrots;            // 声明语句
    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << "carrots.";
    cout << endl;
    carrots = carrots - 1;
    cout << "Now i have " << carrots << " carrots." << endl;
    return 1;
}
```

为什么C++设计有声明语句？

* 目前大火的Python就没有声明语句，直接赋值直接用，如`testInt = 1`,`testInt`直接被声明为int类型并赋值。这确实是一种便利，然而对于很大一部分程序员而言，变量名字太长写错名字是常有的事情，这样在Python中就直接创建了一个新的变量，它也符合Python的基本语法。声明语句的作用在于可以发现这种错误并及时提醒。

## 2.22 赋值语句

## 2.23 cout输出变量

carrots存储时，将int类型存储为2进制，cout输出时，将其从二进制转化为字符串类型并输出。这是由于cout面向对象的特性，它通过`<<`运算符得到后面的类型并调整相应的行为，本质上实现了一种函数的重载。
