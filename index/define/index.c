#include <stdio.h>
#define GETA '\101'
#define C char

int main()
{
    C a = GETA;
    printf("%c, %d", a, a);
    return 0;
}