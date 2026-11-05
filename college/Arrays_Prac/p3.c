#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[8] = {12, 13, 14, 15, 16, 17, 18, 19};
    int i, e, d;
    e = 0;
    d = 0;
    for (i = 0; i < 8; i++)
    {
        if (a[i] % 2 == 0)
            e++;
        else
            d++;
    }
    printf("Even is %d\n", e);
    printf("Odd is %d", d);
    return 0;
}