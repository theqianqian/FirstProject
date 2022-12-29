#include <iostream>
using namespace std;
int main()
{
    cout << "温馨提示:\n  由于部分原因，水仙花数只存在于1000以内，即三位数！" << endl;
    int begin = 1, end = 100, count = 0, special = 0, special_b = 0;
    cout << "请输入范围(起)：";
    cin >> begin;
    cout << "请输入范围(终)：";
    cin >> end;
    while (begin > 1000)
    {
        cout << "提示由于水仙花数的特别，导致其只出现在1000以内，故请重新输入范围：" << endl;
        special_b++;
        cout << "请输入范围(起)：";
        cin >> begin;
        if (special_b >= 3)
        {
            cout << "你tm故意找茬是吧！这数你就说你输不输吧？我直接给你默认1，你爱要不要，艸！" << endl;
            begin = 1;
        }
    }
    while (end > 1000)
    {
        cout << "提示由于水仙花数的特别，导致其只出现在1000以内，故请重新输入范围：" << endl;
        special++;
        cout << "请输入范围(终)：";
        cin >> end;
        if (special >= 3)
        {
            cout << "你tm故意找茬是吧！这数你就说你输不输吧？我直接给你默认1000，你爱要不要，艸！" << endl;
            end = 1000;
        }
    }
    int i = begin;
    do
    {
        int a = 0, b = 0, c = 0, d = 0;
        a = i % 10;
        b = i / 10 % 10;
        c = i / 100 % 10;
        if (a * a * a + b * b * b + c * c * c == i)
        {
            cout << "水仙花数：" << i << endl;
        }
        i++;
    } while (i < end);
    system("pause");
    return 0;
}