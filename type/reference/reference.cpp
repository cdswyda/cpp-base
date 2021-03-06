// reference.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// 基本类型引用
void baseDemo(void)
{
    int a = 3;
    int &b = a; // b是对a的引用

    b = 4;

    cout << a << endl;
}

// 结构体类型引用
typedef struct
{
    int x;
    int y;
} Pos;
void structDemo(void)
{
    Pos pos1;
    pos1.x = 0;
    pos1.x = 0;

    Pos &pos2 = pos1;

    pos2.x = 10;
    pos2.y = 10;

    cout << pos1.x << "," << pos1.y << endl;
}

// 指针类型引用
void pointDemo(void)
{
    int a = 10;
    int *p = &a; // 定义指针p 指向a
    int *&q = p; // 定义指针q 引用指针p

    *q = 20;
    cout << a << endl;
}

// 引用作为函数参数

int main(void)
{
    baseDemo();
    structDemo();
    pointDemo();

    system("pause");
    return 0;
}