/*
 * @Description: ����
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
    // ��������Ĭ�Ͻ������Ϊ������ֱ������С�����
    cout << "��������:9/5: " << 9 / 5 << endl;
    // �������������Ϊ������ ��������Ĭ��Ϊdouble���ͣ�
    cout << "����������:9.0/5.0: " << 9.0 / 5.0 << endl;
    // ����/�����У�c++�Ὣ����תΪ����������߾���ת��
    cout << "����/����:9.0/5: " << 9.0 / 5 << endl;
    cout << "Ĭ��double�����ͳ���:1e7/9.0: " << 1e7 / 9.0 << endl;
    // float�����������Ȳ����������
    cout << "ǿ��float����:1e7f/9.0f: " << 1e7f / 9.0f << endl;
    return 0;
}