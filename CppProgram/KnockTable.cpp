#include <iostream>
using namespace std;
#include <ctime> //这是引用time的一个头文件
int main()
{
    int begin = 0, end = 0;
    cout << "begin:";
    cin >> begin;
    cout << "end:";
    cin >> end;
    for (int i = begin; i < end + 1; i++)
    {
        if (i % 7 == 0)
        {
            cout << "数字：" << i << endl;
            cout << "敲一次桌子！" << endl;
        }
    }
    system("pause");
    return 0;
}