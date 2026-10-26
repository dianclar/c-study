#include <stdio.h>
int main()
{
    int a, c, d;
    char b;
    a = getchar();
    b = getchar();
    printf("%d,%c", a, b);
    putchar(a);
    scanf("%3d%2c,%d%dabc", &a, &b, &c, &d);
    printf("%d,%c,%d,%d", a, b, c, d);

    return 0;
}