#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "������ݣ�" << endl;
    cin >> a;
    bool year = (a % 4 == 0 && a % 100 != 0) || (a % 400 == 0);
    if (year)
    {
        cout << a << "��������" << endl;
    }
    else
    {
        cout << a << "�겻������" << endl;
    }
    system("pause");
    return 0;
}