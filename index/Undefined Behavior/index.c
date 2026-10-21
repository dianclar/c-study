#include <stdio.h>
int main()
{
    int a, b, c; // 未定义行为 UB
    printf("%d, %d, %d", a, b, sizeof c);
    return 0;
}