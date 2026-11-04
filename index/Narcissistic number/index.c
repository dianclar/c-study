#include <stdio.h>
int main()
{
    int a, b, c;
    for (int num = 100; num < 1000; num++)
    {
        a = num / 100;
        b = num / 10 % 10;
        c = num % 10;
        if (a * a * a + b * b * b + c * c * c == num)
            printf("%d\n", num);
    }
}