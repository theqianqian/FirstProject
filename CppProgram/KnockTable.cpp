#include <iostream>
using namespace std;
#include <ctime> //��������time��һ��ͷ�ļ�
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
            cout << "���֣�" << i << endl;
            cout << "��һ�����ӣ�" << endl;
        }
    }
    system("pause");
    return 0;
}