<!--
 * @Description: 
 * @Author: Andew
 * @Date: 2019-10-12 14:40:09
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-14 09:03:59
 -->

# 2.4 ����

## 2.4.1 �з���ֵ�ĺ���

![�з���ֵ�ĺ���](images/1570862732828.png)
![�з���ֵ�ĺ���](images/23132123123.jpg)
> �������塢����ԭ�͡���������
>   1. �������弴����һ������������ ��`double sqrt(double x){��������}`
>   2. �������ü������������������ ��`double value = sqrt(x);`
>   3. ����ԭ�ͼ������������� `double sqrt(double);`����ϵͳҪ���ȱ��뺯�����ٵ��ú�����Ҳ���Ƕ���Ҫ���ں���֮ǰ�����ǲ���Ҳ���ԣ�ͨ�������������ĳ���и���������֮����ʵ������������ɡ�����ԭ���������Ǻ����Ľӿڣ���һ��������ʽ��ͨ������mian����֮ǰ��

```c++
// sqrt.cpp
#include <bits/stdc++.h>
// #include <cmath>
using namespace std;

int main()
{
    double area;
    cout << "Enter the floot area,int sqare feet,of your home:" << endl;
    cin >> area;
    double side;
    side = sqrt(area);
    cout << side << endl;
    return 0;
}
```

�����ں������������⺯����ʹ��ǰҲҪ������`#include <bits/stdc++.h>`�����˴󲿷ֳ��õĿ⡣�������ʱ�����Զ�������Ӧ�Ŀ⺯����ע��<>��""����·����һ����

## 2.4.2 �����ı���

## 2.4.3 �Զ��庯��

![�Զ��庯��](images/21356575.jpg)

## 2.4.4 �з���ֵ���Զ��庯��

## 2.4.5 �ڶຯ��������ʹ��usingָ��

���ݲ�ͬ������using��λ��Ҳ���Բ�ͬ������������ȫ����usingָ�ʹ��`std::`��ָ����ָ����