#include <iostream>
using namespace std;
int main()
{
    cout << "��ܰ��ʾ:\n  ���ڲ���ԭ��ˮ�ɻ���ֻ������1000���ڣ�����λ����" << endl;
    int begin = 1, end = 100, count = 0, special = 0, special_b = 0;
    cout << "�����뷶Χ(��)��";
    cin >> begin;
    cout << "�����뷶Χ(��)��";
    cin >> end;
    while (begin > 1000)
    {
        cout << "��ʾ����ˮ�ɻ������ر𣬵�����ֻ������1000���ڣ������������뷶Χ��" << endl;
        special_b++;
        cout << "�����뷶Χ(��)��";
        cin >> begin;
        if (special_b >= 3)
        {
            cout << "��tm�����Ҳ��ǰɣ��������˵���䲻��ɣ���ֱ�Ӹ���Ĭ��1���㰮Ҫ��Ҫ���H��" << endl;
            begin = 1;
        }
    }
    while (end > 1000)
    {
        cout << "��ʾ����ˮ�ɻ������ر𣬵�����ֻ������1000���ڣ������������뷶Χ��" << endl;
        special++;
        cout << "�����뷶Χ(��)��";
        cin >> end;
        if (special >= 3)
        {
            cout << "��tm�����Ҳ��ǰɣ��������˵���䲻��ɣ���ֱ�Ӹ���Ĭ��1000���㰮Ҫ��Ҫ���H��" << endl;
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
            cout << "ˮ�ɻ�����" << i << endl;
        }
        i++;
    } while (i < end);
    system("pause");
    return 0;
}