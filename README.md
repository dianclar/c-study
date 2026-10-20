# c

特点：
语法限制少，程序设计自由
32+5个关键字，9个控制语句，34个运算符
大小写严格
可访问内存，位操作，操作硬件
程序执行效率高，可移植性好

## 准备

```
Win => MSYS2 => pacman -S mingw-w64-x86_64-gcc => gcc *.c -o *.exe(运行生成任务ctrl + shift + b)
VSCode => C/C++、C/C++ Extension Pack、Code Runner => C/C++:Edit Configurations (UI)
```

```json
// .vsdode/setting.json
{
  "code-runner.runInTerminal": true,
  "code-runner.executorMap": {
    "c": "cd $dir && chcp 65001>nul && gcc $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt"
  },
  "[c]": {
    "editor.defaultFormatter": "ms-vscode.cpptools"
  }
}
```

## 关键字

auto
double
int
struct
break
else
long
switch
case
enum
register
typedef
char
extern
return
union
const
float
short
unsigned
continue
for
signed
void
default
goto
static
volatile
do
if
sizeof
while
——————
inline
restrict
Bool
Complex
Imaginary

# hello world

```c
// 我是注释
#include <stdio.h> // 预处理指令，stdio标准输入输出库，h表示头文件，<>系统路径，”“先当前后系统路径

int main(void) // 主函数，程序入口，一个程序有且仅有一个
{
    printf("Hello, World!");  // 调用printf函数，输出字符串
    return 0; // 结束并返回值，0表示正常结束
} /
```

# 源程序

一个源程序可以由一个或多个源文件组成
一个源文件可以由一个或多个函数组成
一个源程序有且仅有一个main函数，并从main函数开始执行，mian函数位置随意
源程序的基本单位为函数

# 注释

方便阅读理解程序
注释不会被编译

```
// 单行注释
/* */ 多行注释
```

# 执行

.c => 预处理、检查编译、汇编 => .obj => 可执行程序
.c不能直接编译运行为可执行程序

# 算法

解决问题的步骤和方案

## 特性

有穷性
确定性
有效性/可行性
可输入
有输出

程序 = 数据结构 + 算法

# 数据类型

```
数据类型
├──基本类型
│   ├──整形类型/整型
│   │   ├──基本整型（int）
│   │   ├──短整型（short）
│   │   ├──长整型（long）
│   │   ├──双长整型（long long）
│   │   ├──字符型（char）
│   │   └──布尔型（bool）
│   └──浮点类型/实型
│       ├──单精度浮点型（float）
│       ├──双精度浮点型（double）
│       └──复数浮点型（了解）
├──枚举类型（enum）
├──空类型（void）
└──派生类型
    ├──指针类型（*）
    ├──数组类型（[]）
    ├──结构体类型（struct）
    ├──共用体类型（union）
    └──函数类型
```

# 常量

不允许改变值的量

## 分类

整型常量
实型常量
字符型常量
字符串常量
符号常量

## 整型常量

八进制：0开头，无符号，0-7
十进制：无
十六进制：0x/0X开头，0-f

后缀L/l表示长整型
后缀U/u表示无符号

## 实型常量

又称实数浮点数，c的实数概念和数学不同
分十进制形式和指数形式
“-.1”、“1.”合法，“."不合法
指数形式（aEn）的n为整数，a和n都必须有值

## 字符型常量

分普通字符和转义字符
一个字符占一个字节，常用ASCII码

### 关键ASCII码

```
\0  0
0   48
a   97
A   65(差32)
' ' 32
\n  10
```

了解：0-31为控制字符，32-126为可显示字符，127为DEL

### 转义字符

由反斜杠“\”开头，具有特定含义

```
\'  单引号
\"  双引号
\\  反斜杠
\a  警告声
\b  退格
\f  换页
\n  换行
\r  回车
\t  水平制表符
\v  垂直制表符
\101  1-3位并为八进制数，字符类型，相当于字符‘A’
\x41  1-2位并为十六进制数，字符类型，相当于字符‘A’
```

## 字符串常量

由双引号括起来的字符序列，区别于单引号的字符型常量
可以包含多个字符及转义字符
占用为字符数量+1个字节，末尾自动加'\0'

## 符号常量

```c
#define PI 3.14
```

用#define定义的常量
一般需规范大写符号常量
和#include一样是预处理指令/宏定义，指令末尾不加;

# 变量

允许改变值的量
先声明后使用

## int

int 声明有符号整型变量,相当于 signed int
unsigned int 声明无符号整型变量

### 范围

声明的值根据字节大小有范围限制
变量溢出时，丢失高位数据

## char

char 声明字符型变量
赋值字符时，保存对应ASCII码值，'1'+'1'为对应ASCII码值相加
本质为只占一个字节的有符号整型变量

## 命名规则

```
1. 只能由字母、数字、下划线组成
2. 不能以数字开头
3. 不能使用关键字
4. 区分大小写
5. 尽量见名知意
```

# 提示

警告：能正常运行，但可能有错误，结果不符合预期
错误：不能编译通过
