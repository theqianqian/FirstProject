#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "������ݣ�" << endl;
    cin >> year;
    bool LeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    if (LeapYear)
    {
        cout << year << "��������" << endl;
    }
    else
    {
        cout << year << "�겻������" << endl;
    }
    system("pause");
    return 0;
}