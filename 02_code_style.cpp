// Copyright (c) 2024 by Chrono
//
// file  : xxx.cpp
// since : 2024-xx-xx
// desc  : ...

/**
 * 任何人都能写出机器能看懂的代码，但只有优秀的程序员才能写出人能看懂的代码。
 *
 * 好程序里的空白行至少要占到总行数的 20% 以上。
 *
 * 缓存失效与命名是计算机科学的两大难题。
 *
 * 命名规则：
 * 1. 变量、函数名和名字空间用 snake_case，全局变量加“g_”前缀；
 * 2. 自定义类名用 CamelCase，成员函数用 snake_case，成员变量加“m_”前缀；
 * 3. 宏和常量应当全大写，单词之间用下划线连接；
 * 4. 尽量不要用下划线作为变量的前缀或者后缀（比如 _local、name_），很难识别。
 *
 * 一些实践：
 * 1. 匈牙利命名真心不推荐了，参考《clean code》中关于avoid encoding的说明。
 * 2. 如果是存现代c++工程，不考虑兼容C的话. Header guards可以使用#pragma once替代。
 * 3. 避免注释，最好使用代码来阐述。很多信息可以通过代码仓库来表达，比如commit message。
 * 4. m_，g_ 等前缀如果使用现代化的ide的话，也可以考虑省略，因为ide的高亮能够区分。
 * 5. 如果不是在写类库，比如开发应用程序，最好命名规则能快速区分这个是你的代码，还是标准库、知名类库的代码，可能这也是大厂流行 CamalCase 的缘由。
 * 6. Google的style guide是个不错的参考，但是也有很多不可取的规则，感觉原因：Google出这个guide的时候modern c++还没有流行，Google当时内部还有很多技术债，Google想把c++写的像java。所以Google后来在golang里面....
 * 7. 如果是参与现有项目，无论现有规则多么的不爽，都先遵循现有的规则。
 * 8. 修改代码时要更新注释，不要出现牛头不对马嘴的情况，很容易误导别人，时间长了甚至自己都会被误导
 */

#include <string>

#define MAX_PATH_LEN 256 // 常量，全大写

int g_sys_flag; // 全局变量，加g_前缀

namespace linux_sys
{                         // 名字空间，全小写
  void get_rlimit_core(); // 函数，全小写
}

class FilePath final // 类名，首字母大写
{
public:
  void set_path(const string &str); // 函数，全小写
private:
  string m_path; // 成员变量，m_前缀
  int m_level;   // 成员变量，m_前缀
};

// author  : heora
// date    : 2024-xx-xx
// purpose : get inner counter value of generic T
// notice  : T must have xxx member
// notice  : return value maybe -1, means xxx, you should xxx
template <typename T>
int get_value(const T &v);

// ------------------------------

// TODO: change it to unordered_map
// XXX: fixme later
