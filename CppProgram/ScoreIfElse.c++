#include <iostream>
using namespace std;
int main()
{
    float score;
    cout << "��ĳɼ��ǣ�";
    cin >> score;
    if (score >= 60)
    {
        if (score > 150)
        {
            cout << "С����û����֦��һ�㶼����֦��" << endl;
        }
        else
        {
            if (score <= 80)
            {
                cout << "����" << endl;
            }
            else
            {
                if (score <= 95)
                {
                    cout << "����" << endl;
                }
                else
                {
                    cout << "����" << endl;
                }
            }
        }
    }
    else
    {
        if (score < 0)
        {
            cout << "С����û����֦" << endl;
        }
        else
        {
            cout << "������" << endl;
        }
    }
    system("pause");
    return 0;
}