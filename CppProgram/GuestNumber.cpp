#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int num, count = 1;
    int begin = 1, end = 100;
    cout << "请输入随机数范围起点：";
    cin >> begin;
    cout << "请输入随机数范围终点：";
    cin >> end;
    num = rand() % (end - begin + 1) + begin;
    if (num < begin)
    {
        num = begin + num;
    }
    int guest;
    cout << "猜数字:";
    cin >> guest;
    while (num != guest)
    {
        if (num > guest)
        {
            cout << "猜得小了！" << endl;
            count++;
        }
        else
        {
            cout << "猜得大了！" << endl;
            count++;
        }
        cout << "猜数字:";
        cin >> guest;
    }
    cout << "\t历经" << count << "次," << endl;
    cout << "\t你猜对了！" << endl;
    system("pause");
    return 0;
}