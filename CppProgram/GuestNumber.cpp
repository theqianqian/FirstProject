#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(void)
{
    int num, count = 1;
    int begin = 1, end = 100;
    cout << "�������������Χ��㣺";
    cin >> begin;
    cout << "�������������Χ�յ㣺";
    cin >> end;
    num = rand() % (end - begin + 1) + end - 1;
    if (num < begin)
    {
        num = begin + num;
    }
    int guest;
    cout << "������:";
    cin >> guest;
    while (num != guest)
    {
        if (num > guest)
        {
            cout << "�µ�С�ˣ�" << endl;
            count++;
        }
        else
        {
            cout << "�µô��ˣ�" << endl;
            count++;
        }
        cout << "������:";
        cin >> guest;
    }
    cout << "����" << count << "��," << endl;
    cout << "��¶��ˣ�" << endl;
    system("pause");
    return 0;
}