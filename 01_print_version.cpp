#include <iostream>

/**
 * 编译阶段
 * 1. 编码（Coding）
 * 2. 预处理（Preprocessing）
 *   - 宏定义（Macro Definition）
 *   - 头文件包含（Header File Inclusion）
 *   - 条件编译（Conditional
 * 3. 编译（Compilation + Linking）
 *   - 编译器（Compiler）
 *   - 链接器（Linker）
 * 4. 运行（Execution）
 *
 * 面向过程和面向对象是C++的两种主要编程范式。
 * - 面向过程编程是一种基于过程的编程范式，它以函数为基本单元，通过函数调用来组织代码。
 * - 面向对象编程是一种基于对象（类、实例）的编程范式，它以对象为基本单元，通过对象之间的交互来组织代码。
 */

int main()
{
  using namespace std;

  cout << "c++ version = " << __cplusplus << endl;

  cout << "gcc version = " << __VERSION__ << endl;

  cout << "gcc major = " << __GNUC__ << endl;
  cout << "gcc minor = " << __GNUC_MINOR__ << endl;
  cout << "gcc patch = " << __GNUC_PATCHLEVEL__ << endl;

  cout << "libstdc++ = " << __GLIBCXX__ << endl;
}
