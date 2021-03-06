// base.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

namespace a
{
    char name[] = "a";
}

namespace b
{
    char name[] = "b";
}


// 获取最大值或最小值函数
int getMaxOrMin(int *arr, int len, bool isMax) {
    int t = arr[0];
    int i = 1;
    if (len == 1) {
        return t;
    }

    while (i < len) {
        if (isMax) {
            if (t < arr[i]) t = arr[i];
        }
        else {
            if (t > arr[i]) t = arr[i];
        }
        i++;
    }

    return t;
}

int main()
{
    // io
    cout << "place input a number" << endl;

    int input;
    cin >> input;

    cout << "oct " << oct << input << endl;
    cout << "dec " << dec << input << endl;
    cout << "hex " << hex << input << endl;

    cout << "请输入一个布尔值(0,1)" << endl;

    bool b = false;

    cin >> b;
    cout << "boolalpha " << boolalpha << b << endl;
    
    // namespace 划分作用域
    cout << a::name << b::name << endl;

    // 调用
    int arr[4] = { 3,5,1,7 };
    cout << "是否取最大值？" << endl;

    bool isMax;

    cin >> isMax;

    cout << getMaxOrMin(arr, 4, isMax) << endl;
    system("pause");
    return 0;
}

