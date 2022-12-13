#include <iostream>
using namespace std;
int main()
{
    int result = 0;
    int a = 0;
    int b = 0;
    int jian = 0;
    cout << "a的值为：";
    cin >> a;
    cout << "b的值为：";
    cin >> b;
    result = a + b;
    jian = a - b;
    cout << "a+b=" << result << '\n';
    cout << "a-b=" << jian << '\n';
    system("pause");
    return 0;
}