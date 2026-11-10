#include <stdio.h>
#define GETA '\101'
#define C char
typedef C GETAa;

int main()
{
    GETAa a = GETA;
    printf("%c, %d", a, a);
    return 0;
}