#include <iostream>
using namespace std;
int main()
{
    cout << "��Ϸ����\n";
    cout << "  ��Ϸ�Ĺ���ǳ��ļ򵥰����������ȶ�����Χ���ƺ�����������������ǣ������;����7�ı������߸�λ��ʮλ����λ��7��������Ҫ����������Ȼ�������ӣ���Ϸ�Ĺ��������ô�򵥣����������𣿹�����û�����������־����ˣ�" << endl;
    int begin = 1, end = 100, count = 0;
    cout << "�����뷶Χ(��)��";
    cin >> begin;
    cout << "�����뷶Χ(��)��";
    cin >> end;
    for (int i = begin; i < end + 1; i++)
    {
        if (i % 7 == 0)
        {
            cout << "\t�����ӣ�(����:" << i << ")" << endl;
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
                    cout << "\t�����ӣ�(����:" << i << ")" << endl;
                    count = ++count;
                    break;
                }
                else
                {
                    if (i_fake == 0)
                    {
                        cout << "\t���֣�" << i << endl;
                        break;
                    }
                }
            }
        }
    }
    cout << "�����ӵĴ���Ϊ��" << count << endl;
    system("pause");
    return 0;
}