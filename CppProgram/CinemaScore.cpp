#include <iostream>
using namespace std;
int main()
{
    int score = 0;
    cout << "本片评分（1~10）：";
    cin >> score;
    switch (score)
    {
    case 10:
    case 9:
        cout << "BEST!!!" << endl;
        break;
    case 8:
    case 7:
        cout << "GREAT!!!" << endl;
        break;
    case 6:
    case 5:
        cout << "GOOD!!!" << endl;
        break;
    case 4:
        cout << "PASS!" << endl;
        break;
    default:
        cout << "弟中之弟！狗都不看，看了都傻子！" << endl;
        break;
    }
    system("pause");
    return 0;
}