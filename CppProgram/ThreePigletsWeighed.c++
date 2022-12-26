#include <iostream>
using namespace std;
int main()
{
    int pig_1, pig_2, pig_3 = 0;
    cout << "pig1质量：";
    cin >> pig_1;
    cout << "pig2质量：";
    cin >> pig_2;
    cout << "pig3质量：";
    cin >> pig_3;
    if (pig_1 > pig_2 && pig_1 > pig_3)
    {
        if (pig_2 > pig_3)
        {
            cout << "pig1 > pig2 >pig3" << endl;
        }
        else
        {
            if (pig_2 < pig_3)
            {
                cout << "pig1 > pig3 > pig2" << endl;
            }
            else
            {
                cout << "pig1 > pig2 = pig3" << endl;
            }
        }
    }
    else
    {
        if (pig_2 > pig_1 && pig_2 > pig_3)
        {
            if (pig_1 > pig_3)
            {
                cout << "pig2 > pig1 > pig3" << endl;
            }
            else
            {
                if (pig_1 < pig_3)
                {
                    cout << "pig2 > pig3 > pig1" << endl;
                }
                else
                {
                    cout << "pig2 > pig1 = pig3" << endl;
                }
            }
        }
        else
        {
            if (pig_3 > pig_1 && pig_3 > pig_2)
            {
                if (pig_1 > pig_2)
                {
                    cout << "pig3 > pig1 > pig2" << endl;
                }
                else
                {
                    if (pig_1 < pig_2)
                    {
                        cout << "pig3 > pig2 > pig1" << endl;
                    }
                    else
                    {
                        cout << "pig3 > pig1 = pig2" << endl;
                    }
                }
            }
            else
            {
                if (pig_1 = pig_2 = pig_3)
                {
                    cout << "pig1 = pig2 = pig3" << endl;
                }
            }
        }
    }
    system("pause");
    return 0;
}