#include <stdio.h>
#include <stdlib.h>
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result;
    result = add(4, 5);
    printf("%d", result);
    system("pause");    // ��ֹ���к��Զ��˳�����ͷ�ļ�stdlib.h
    return 0;
}