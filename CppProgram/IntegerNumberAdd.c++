#include <stdio.h>
#include <stdlib.h>
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result;
    result = add(2, 3);
    printf("%d", result);
    return 0;
}