// function.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <time.h>


using namespace std;

// 参数默认值
// void fun(int a, int b = 2, int c); // 错误,默认实参不在形参列表的结尾
void test(int a, int b = 2, int c = 3); // 
// =====================================


// 函数重载
/**
*函数功能：返回a和b的最大值
*a和b是两个整数
*/
int getMax(int a, int b)
{
    return a > b ? a : b;
}
/**
* 函数功能：返回数组中的最大值
* arr：整型数组
* count：数组长度
* 该函数是对上面函数的重载
*/
int getMax(int *arr, int len)
{
    // 定义一个变量并获取数组的第一个元素
    int a = arr[0];
    for (int i = 1; i < len; i++)
    {
        // 比较变量与下一个元素的大小
        if (a < arr[i])
        {
            // 如果数组中的元素比maxNum大，则获取数组中的值
            a = arr[i];
        }
    }
    return a;
}
void test2(void)
{
    int numArr[3] = { 3, 8, 6 };

    // 双 int 调用
    cout << getMax(3, 6) << endl;

    // 自动调用返回数组中最大值的函数返回数组中的最大值
    cout << getMax(numArr, 3) << endl;
}
// =============================

// inline
inline double f1(double a, double b)
{
    return a + b;
}
double f2(double a, double b)
{
    return a + b;
}

int main()
{
    test(1);
    test2();

    int i = 0;
    const double pi = 3.141592652;
    clock_t t1 = clock();
    do {
        f2(pi, pi);
    } while (i++ < 100000000);
    cout << "normal " << (clock() - t1) * 1.0 / CLOCKS_PER_SEC * 1000 << endl;
    
    i = 0;
    clock_t t2 = clock();
    do {
        f1(pi, pi);
    } while (i++ < 100000000);
    cout << "inline " << (clock() - t2) * 1.0 / CLOCKS_PER_SEC * 1000 << endl;
        
    system("pause");
    return 0;
}

void test(int a, int b, int c)
{
    cout << "test" << endl;
    cout << a << "," << b << "," << c << endl;
}