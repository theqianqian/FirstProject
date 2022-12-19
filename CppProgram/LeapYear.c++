#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "输入年份：" << endl;
    cin >> year;
    bool LeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    if (LeapYear)
    {
        cout << year << "年是闰年" << endl;
    }
    else
    {
        cout << year << "年不是闰年" << endl;
    }
    system("pause");
    return 0;
}