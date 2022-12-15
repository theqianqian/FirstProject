#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "输入年份：" << endl;
    cin >> a;
    bool year = (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0);
    if (year)
    {
        cout << a << "年是闰年" << endl;
    }
    else
    {
        cout << a << "年不是闰年" << endl;
    }
    system("pause");
    return 0;
}