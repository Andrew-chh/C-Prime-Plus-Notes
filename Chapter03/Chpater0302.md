<!--
 * @Description: Chapter0302
 * @Author: Andew
 * @Date: 2019-10-21 09:11:59
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-29 16:06:48
 -->

# 3.2 const限定符

* const的作用:替代`#define`作为有类型检查的常量来使用。他的值被初始化后就固定了，成为一个只读变量，不能更改。(推荐使用特殊的命名规范来区分常量和非常量)。
* const的声明:`const type name = value`。需要在声明的时候赋值，如不赋值，那么常量的值是不确定的，并且无法修改。
* const相对于#define的好处：
  * 有明确的类型
  * 可以嵌套进更复杂的类型
  * 可以限定使用区域

---

# const用法扩展

面试一直会问道const的用法、原理等，索性趁回归基础总结一下。

* **const的基本作用**：防止值被修改
* **定义一个const对象**：`const type name = value`，声明常规变量一定要初始化，上文已经讲过。在类中声明一个const成员只能使用**初始化列表**进行初始化。
* **const的作用域**： const默认的作用域是本文件。他能被本文件的对象访问，但只存在本文件中，不能被其他文件访问。如果想要在其他文件中也访问到这个const变量，需要在定义的时候加`extern`声明。如`extern const x = a`。在其他文件中使用`extern const x`进行访问。*对于非const变量，定义时默认是extern类型的，const要额外声明*。
* **const引用**：const引用是指向const对象的引用。
  * （非const引用无法引用const变量）由于const对象是不能修改的，如果使用`int &ref = i`，而`i`又是一个const变量，从引用上来说可以使用ref来修改i的值的，而i又不能修改，所以这里是非法的。
  * （const引用本身不能修改）const修饰的引用是也是一个常量，这个引用是不能更改的。
  * （const引用的对象是可以修改的）const引用可以指向非const变量，通过非const变量自身的修改来修改引用的结果，但是不能通过引用来修改，因为此时引用本身还是const类型的。
  * 非const引用应该指向非const变量
  * 非const变量只能绑定到同类型的引用中，const变量可以绑定不同但相关的类型。对于非const引用，类型不同不能绑定比较好理解。对于const引用，引用过程中会自发的进行类型的转换。如`double d = 3.14;const int &ref2 = d;`，系统用`int tmp = d；const int &ref2 = temp;`来实现const绑定类型不同的变量。

* const引用示例代码：

```c++
const int test1 = 1;
    const int test2 = 2;
    int test3 = 3;
    int test4 = 4;

    int &ref = test3;
    ref += 1;
    cout << test3 << endl;
    //1.引用修改非const对象的值

    const int &t1 = test1;
    cout << t1 << endl;
    // 2.t1 = test2;  报错，const引用无法修改（read only)

    const int &t3 = test3;
    cout << t3 << endl;
    test3 += 1;
    cout << t3 << endl;
    // t3 += 1; // 错误，引用本身无法修改
    // 3.可以指向非const变量,非const变量可以修改。

    // 4.int &t4 = test2; 报错，非const引用无法指向const常量

    double test5 = 5.0;
    // int &t5 = test5; 报错，无法用 "double" 类型的值初始化 "int &" 类型的引用
    const int &t5 = test5;
    cout << t5 << endl;
    // 5. 非const变量只能绑定到同类型的引用中，const变量可以绑定不同但相关的类型
```

* **const指针**：const指针广义上来讲，是带有const关键字的指针变量，主要有下面三种：
  * `const int * p / int const *p` const修饰的是`*p` 这两个是一个意思，就是指向*int*类型*常量*的指针，指针的地址（指向）是可以任意改的，但是不能通过指针来修改所指向的值，因为指向的是一个常量。
  * `int * const p` const直接修饰地址`p`,指的是p是一个`常量`指针，指向`整型`变量。p本身的地址（指向）是无法修改的，而p所指向的是一个变量值，是可以修改的。
  * `int const int * const p; / int const * const p;` 这个是上面两者的结合，指针本身和指向的值都不能更改。
  
* const指针示例代码：

```c++
    int a = 10;
    const int b = 20;
    const int *p = &a;
    const int *q = &b;
    //   *p = 11;   报错，不能通过指针修改。
    cout << *p << " - " << *q << endl;
    q = p;
    a = 30;
    cout << *p << " - " << *q << endl;
    /* 解释：
        const int *q 指的是指向的地址可以改，指向的值不能改(*p=11非法).
        const 修饰的目标是int *q，也就是q所指向的值，所以再给q赋值是非法的。
        const int *q可以指向变量或常量，然而不能通过q这个指针去修改指向的值，
        但是如果指向的是一个变量，变量本身是可以重新赋值的，只是不能通过指针去修改。  
    */

    int *const x = &a;
    // int *const y = &b;   报错，不能指向常量
    int c = 11;
    // x = &c;   报错，常量地址不能修改
    cout << *p << " - " << *q << endl;
    /* 解释：
        int * const x 表示x地址是一个常量，它必须指向一个固定的地址。但是地址里面
        的值是可以改变的，所以int * const x不能指向一个常量。它只是限制你的地址不能
        改变而已。
    */
```
