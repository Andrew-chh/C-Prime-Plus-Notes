<!--
 * @Description: Chapter0304 ���������
 * @Author: Andew
 * @Date: 2019-10-21 14:06:38
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-24 10:19:46
 -->

# c++���������

## 3.4.1 ����������ȼ��ͽ����

��������ο������������ȼ���ע�����š�

## 3.4.2 ������Ĭ������ת���;�������

```c++
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
```

����ĸ������͵ĳ�����ʵ�ǳ����������**����**,����OOP��һ����Ҫ����
![��������](/Chapter03/images/��������.jpg)

## 3.4.3 ��ģ����%

��������

## 3.4.5 ����ת��

1. ��ֵ/��ʼ��ʱ������ת��

    * �罫һ��short���͸�ֵ��long���ͣ�short���ͻ������չ���Ӷ�ռ�ø�����ֽڣ��Դﵽlong�ĳ��ȡ���֮����һ���߾��ȵ�ֵ(��double)��ֵ���;��ȵ�ֵ(��int)�����Զ��������ȵ��¾��Ƚ��͡��߾��ȸ�ֵ���;��Ƚ���ǲ�ȷ���ġ�
    ![��ֵת������](/Chapter03/images/��ֵת������.jpg)
    * ���⣬0��ֵ��bool��תΪfalse����0תΪtrue

2. ʹ��{}��ʼ��ʱ������ת��
    c++11�У�����ʹ��{}�����б��ʼ����{}��ʼ��ʱ�������ڲ��ж�Ŀ������ܷ���ȷ�洢�������ֵ��������У��ᱻ��Ϊ�Ƿ�������:`float b {1}`�У�b������float������������int���͵�1����ʼ���Ϸ���`int c {3.1415}`�У�int���͵�cҪ����double3.1415�ǲ����ģ��ᷢ��������ʧ��������ǷǷ��ġ�����`double a {1}; int b {a}`Ҳ�ǺϷ��ģ���Ϊint������1����Чλ��������ok��(Ȼ�����ǻ���warning�����ǳ���Գ���Ƕ�����warning��:yum:)��

3. ���ʽ�е�����ת��
    * **��������(integral promotion)** �ڽ��б��ʽ����ʱ��C++�ὫһЩ����(bool\char\unsigned char\signed char\short)�Զ�ת��Ϊint���͡���`short a = 20;short b = 10; short c = a + b`�У��༭�����Ƚ���ȡa��b��ֵ��������ת��Ϊint���ͣ����������ת��short���͸�ֵ��c��

    * �����ʽ���漰����������Ӽ�ʱ���Ὣ��С������ת��Ϊ�ϴ�����͡�

4. ����ʱ������ת��
    �ɺ���ԭ�Ϳ���(Chapter07)

5. ǿ������ת��
    * ��ʽǿ������ת��:
        * (typeName) value ->�̳���C���Եĸ�ʽ
        * typeName (value) ��>c++���ǿ������ת��
    * ����ǿ������ת���� (Chapter15)
        * static_cast
        * const_cast
        * dynamic_cast
        * reinterpret_cast

```c++
/*
 * @Description: Chapter0305����ת��
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

    char ch = 'z';  //ASCII���� 
    cout << "The code for " << ch << "is ";
    cout << int(ch) << endl;
    cout << "yes,the code is ";
    cout << static_cast<int>(ch) << endl;
    return 0;
}
```

6. auto����������ת����Chapter09��
    `auto n = 100` nΪint
    `auto x = 1.5` xΪdouble
    `auto y = 13.e12L` yΪlong double
