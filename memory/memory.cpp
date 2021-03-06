// memory.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
    // 申请内存
    int *p = new int;
    *p = 10;
    cout << "*p " << *p << endl;
    delete p;
    p = NULL;

    // 带初始值
    int *p2 = new int(10);
    cout << "*p2 " << *p2 << endl;
    delete p2;
    p2 = NULL;

    // 块内存
    int *p3 = new int[100];
    int i = 0;
    do {
        p3[i] = i;
        cout << "p3[" << i << "]:" << p3[i] << ", ";
    } while (++i < 100);
    delete []p3;
    p3 = NULL;

    system("pause");
    return 0;
}

