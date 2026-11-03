#include <stdio.h>
#include <math.h> // 数学库

int main()
{
    float a, b, c, p, S;
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        p = (a + b + c) / 2;
        S = sqrt(p * (p - a) * (p - b) * (p - c)); // 开方函数
        printf("%.2f", S);
    }
    if (a != 0 && b * b + -4 * a * c >= 0)
    {
        printf("%.2f\n", (-b + sqrt(b * b - 4 * a * c)) / (2 * a));
        printf("%.2f", (-b - sqrt(b * b - 4 * a * c)) / (2 * a));
    }
}
