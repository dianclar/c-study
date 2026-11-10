#include <stdio.h>

int resetfp(FILE **fp)
{
    if (fclose(*fp))
        return printf("Error\n");
    *fp = fopen("file.txt", "r+");
    if (*fp == NULL)
        return printf("Error\n");
    return 0;
}
int main()
{
    FILE *fp;
    fp = fopen("file.txt", "w+");
    if (fp == NULL)
        return printf("Error\n");
    char c;
    while ((c = getchar()) != '\n')
    {
        fputc(c, fp);
    }
    resetfp(&fp);
    while (~(c = fgetc(fp)))
    {
        printf("%c", c);
    }
    if (fclose(fp))
        return printf("Error\n");
    return 0;
}
