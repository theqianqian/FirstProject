#include <iostream>
using namespace std;
int main()
{
    cout << "游戏规则：\n";
    cout << "  游戏的规则非常的简单啊！首先你先定个范围，绕后把数读出来。啊但是！如果中途遇到7的倍数或者个位、十位、百位是7的数，就要不读出来，然后敲桌子！游戏的规则就是这么简单，你听懂了吗？管你听没听懂，输数字就完了！" << endl;
    int begin = 1, end = 100, count = 0;
    cout << "请输入范围(起)：";
    cin >> begin;
    cout << "请输入范围(终)：";
    cin >> end;
    for (int i = begin; i < end + 1; i++)
    {
        if (i % 7 == 0)
        {
            cout << "\t敲桌子！(数字:" << i << ")" << endl;
            count = ++count;
        }
        else
        {
            int i_fake = i, rest = 0;
            for (;;)
            {
                rest = i_fake % 10;
                i_fake /= 10;
                if (rest == 7)
                {
                    cout << "\t敲桌子！(数字:" << i << ")" << endl;
                    count = ++count;
                    break;
                }
                else
                {
                    if (i_fake == 0)
                    {
                        cout << "\t数字：" << i << endl;
                        break;
                    }
                }
            }
        }
    }
    cout << "敲桌子的次数为：" << count << endl;
    system("pause");
    return 0;
}