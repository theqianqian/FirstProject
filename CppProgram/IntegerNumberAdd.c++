#include <iostream>
using namespace std;
int main()
{
    int result = 0;
    int a = 0;
    int b = 0;
    int jian = 0;
    cout << "a��ֵΪ��";
    cin >> a;
    cout << "b��ֵΪ��";
    cin >> b;
    result = a + b;
    jian = a - b;
    cout << "a+b=" << result << '\n';
    cout << "a-b=" << jian << '\n';
    system("pause");
    return 0;
}