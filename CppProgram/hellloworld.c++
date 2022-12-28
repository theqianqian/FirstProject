#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("1、printf输出版本：\n");
    printf("Hello World!\n");
    printf("你好世界！\n");
    system("pause");
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    cout << "1、cout输出版本：\n"
         << "Hello World\n"
         << "你好世界\n"
         << endl;
}