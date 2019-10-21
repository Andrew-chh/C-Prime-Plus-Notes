<!--
 * @Description: Chapter0302
 * @Author: Andew
 * @Date: 2019-10-21 09:11:59
 * @LastEditors: Andrew
 * @LastEditTime: 2019-10-21 10:28:34
 -->

# 3.2 const限定符

* const的作用:替代`#define`作为有类型检查的常量来使用。他的值被初始化后就固定了，成为一个只读变量，不能更改。(推荐使用特殊的命名规范来区分常量和非常量)。
* const的声明:`const type name = value`。需要在声明的时候赋值，如不赋值，那么常量的值是不确定的，并且无法修改。
* const相对于#define的好处：
  * 有明确的类型
  * 可以嵌套进更复杂的类型
  * 可以限定使用区域
