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
    //   *p = 11;   ��������ͨ��ָ���޸ġ�
    cout << *p << " - " << *q << endl;
    q = p;
    a = 30;
    cout << *p << " - " << *q << endl;
    /* ���ͣ�
        const int *q ָ����ָ��ĵ�ַ���Ըģ�ָ���ֵ���ܸ�(*p=11�Ƿ�).
        const ���ε�Ŀ����int *q��Ҳ����q��ָ���ֵ�������ٸ�q��ֵ�ǷǷ��ġ�
        const int *q����ָ�����������Ȼ������ͨ��q���ָ��ȥ�޸�ָ���ֵ��
        �������ָ�����һ�����������������ǿ������¸�ֵ�ģ�ֻ�ǲ���ͨ��ָ��ȥ�޸ġ�  
    */

    int *const x = &a;
    // int *const y = &b;   ��������ָ����
    int c = 11;
    // x = &c;   ����������ַ�����޸�
    cout << *p << " - " << *q << endl;
    /* ���ͣ�
        int * const x ��ʾx��ַ��һ��������������ָ��һ���̶��ĵ�ַ�����ǵ�ַ����
        ��ֵ�ǿ��Ըı�ģ�����int * const x����ָ��һ����������ֻ��������ĵ�ַ����
        �ı���ѡ�
    */

    const int test1 = 1;
    const int test2 = 2;
    int test3 = 3;
    int test4 = 4;

    int &ref = test3;
    ref += 1;
    cout << test3 << endl;
    //1.�����޸ķ�const�����ֵ

    const int &t1 = test1;
    cout << t1 << endl;
    // 2.t1 = test2;  ����const�����޷��޸ģ�read only)

    const int &t3 = test3;
    cout << t3 << endl;
    test3 += 1;
    cout << t3 << endl;
    // t3 += 1; // �������ñ����޷��޸�
    // 3.����ָ���const����,��const���������޸ġ�

    // 4.int &t4 = test2; ������const�����޷�ָ��const����

    double test5 = 5.0;
    // int &t5 = test5; �����޷��� "double" ���͵�ֵ��ʼ�� "int &" ���͵�����
    const int &t5 = test5;
    cout << t5 << endl;
    // 5. ��const����ֻ�ܰ󶨵�ͬ���͵������У�const�������԰󶨲�ͬ����ص�����
}