#include <iostream>
using namespace std;
int main()
{
    float score;
    cout << "你的成绩是：";
    cin >> score;
    if (score >= 60)
    {
        if (score > 150)
        {
            cout << "小黑子没有树枝，一点都不荔枝！" << endl;
        }
        else
        {
            if (score <= 80)
            {
                cout << "及格" << endl;
            }
            else
            {
                if (score <= 95)
                {
                    cout << "良好" << endl;
                }
                else
                {
                    cout << "优秀" << endl;
                }
            }
        }
    }
    else
    {
        if (score < 0)
        {
            cout << "小黑子没有树枝" << endl;
        }
        else
        {
            cout << "不及格" << endl;
        }
    }
    system("pause");
    return 0;
}