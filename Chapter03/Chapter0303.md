<!--
 * @Description: Chapter0303
 * @Author: Andew
 * @Date: 2019-10-21 10:28:45
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-21 11:38:34
 -->

# 3.3 ������

## 3.3.1 �������ı�ʾ

1. �����ʾ:12.34��0.01��8.0
2. E��ʾ: 2.5e+8(2.5 *10^8)��7E6(7.0 *10^6) (e��Сд����)

(e+x����E-x��ʾС����ǰ�ƻ����x��λ�ã����Խ���������)

## 3.3.2 ����������

> ��Чλ��������������һ����Ϊ0�����������

```c++
/*
 * @Description: ��������������
 * @Author: Andew
 * @Date: 2019-10-21 11:03:29
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-21 11:30:47
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ԭcout���������Ĭ�ϲ��������0��ʹ��cout.setf()��ָ�������ʽ
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    // tub��mint��ԭʼֵ��Ӧ����3.33333333333333333333333.....
    // Ȼ��floatֻ��֤7λ��Чλ��Ҳ������7λ�ڻ�����ȷ��
    cout << "tub = " << tub << endl;
    // ��������*million������float�ľ��ȣ��ͻ����
    cout << "a million tub = " << million * tub << endl;
    // ͬ����*������Խ�󣬴���Խ����
    cout << "ten million tubs = " << 10 * million * tub << endl;
    // double��15λ��Чλ������15λ֮�ھ��ȶ���֤�������Ϊʲôdouble��float���ȸߡ�
    // �ײ�ԭ����Բ鿴float��double���ڴ��еĽṹ
    cout << "mint = " << mint << endl;
    cout << "million mint = " << million * mint << endl;
    return 0;
}
```

## 3.3.3 ���㳣��

���ڸ��㳣����ϵͳΪ�˾��������ռ䣬Ĭ�ϴ洢Ϊdouble���͡������Ҫ����float/long double���ͣ�������Ӻ�׺����`1.2f��2.233F��2.2L` 

## 3.3.4 ��������ȱ��

��:��ʾ��Χ����
ȱ:���������о�������
