#include <stdio.h>
int main()
{
    int a[3][3];
    int (*p)[] = a;
    printf("%d\n", sizeof(p));
}