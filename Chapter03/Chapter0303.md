<!--
 * @Description: Chapter0303
 * @Author: Andew
 * @Date: 2019-10-21 10:28:45
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-21 11:38:34
 -->

# 3.3 浮点数

## 3.3.1 浮点数的表示

1. 常规表示:12.34、0.01、8.0
2. E表示: 2.5e+8(2.5 *10^8)、7E6(7.0 *10^6) (e大小写随意)

(e+x或者E-x表示小数点前移或后移x个位置，所以叫做浮点数)

## 3.3.2 浮点数类型

> 有效位：从右往左数第一个不为0的数起到最左边

```c++
/*
 * @Description: 浮点数精度问题
 * @Author: Andew
 * @Date: 2019-10-21 11:03:29
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-21 11:30:47
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //原cout输出函数会默认不输出最后的0，使用cout.setf()来指定输出格式
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    // tub和mint的原始值都应该是3.33333333333333333333333.....
    // 然鹅float只保证7位有效位，也就是在7位内还是正确的
    cout << "tub = " << tub << endl;
    // 所以这里*million超过了float的精度，就会出错
    cout << "a million tub = " << million * tub << endl;
    // 同样，*的数字越大，错误越明显
    cout << "ten million tubs = " << 10 * million * tub << endl;
    // double有15位有效位，所以15位之内精度都保证。这就是为什么double比float精度高。
    // 底层原理可以查看float和double在内存中的结构
    cout << "mint = " << mint << endl;
    cout << "million mint = " << million * mint << endl;
    return 0;
}
```

## 3.3.3 浮点常量

对于浮点常量，系统为了精度舍弃空间，默认存储为double类型。如果想要定义float/long double类型，可以添加后缀。如`1.2f、2.233F、2.2L` 

## 3.3.4 浮点数优缺点

优:表示范围更大
缺:运算慢、有精度问题
