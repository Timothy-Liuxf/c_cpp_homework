# homework1

---

计算机程序设计基础（1）作业

**特别声明：** 限于当时我的能力问题，这里面有一个比较不规范的地方在这里统一指出。

+ C语言的标准`main`函数写法有且只有两个：`int main(void)`、`int main(int argc, int argv)`，以及它们各自的宽字符版本。我在每个程序里写的`int main()`是不规范的！
+ 用MSVC编译C/C++程序时，如果按微软的官方要求，当`scanf`、`strcat`等一系列“may be not safe”的函数需要被使用的时候，最好的办法是在`include`这个头文件**之前**的某一行写上`#define _CRT_SECURE_NO_WARNINGS`，而不是`#pragma warning(disable: 4996)`。

