/*
 * @Description: ��������������
 * @Author: Andew
 * @Date: 2019-10-21 11:03:29
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-21 14:45:53
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