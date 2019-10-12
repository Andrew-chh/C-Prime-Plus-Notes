<!--
 * @Description: 
 * @Author: Andew
 * @Date: 2019-10-12 11:35:03
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-12 14:36:26
 -->

# 2.3 其他语句

```c++
// getinfo.cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int carrots;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are two more.";
    carrots = carrots + 2;
    cout << "Now u have " << carrots << " carrots" << endl;
    return 0;
}
```

## 2.3.1 cin输入流

与cout类似

## 2.32 cout的拼接

可以使用多个`cout`拼接你想要的语句，或者一个`cout`多个`<<`拼接。

## 2.33 类简介

* 类是一种用户自定义的数据类型，他不是对象，类描述的是数据格式和数据的用法，对象是根据数据格式创建出来的实体。如，animal是一个类，描述所有动物的通用数据和用法，而lion就是一个对象，是一个具体的实体。
* 类中描述了数据的具体用法，类通过向对象发送消息来告诉对象实现某个功能。发送消息的方式有两种，一个是调用类的方法，第二种是重载操作符。`cout`就是通过重载`<<`来显示字符串。
