#include <stdio.h>
#include <stdlib.h>
int main()
{
    int es, os, s, e;
    es = 0;
    os = 0;
    printf("Enter starting point PRESS ENTER and enter ending point:");
    scanf("%d %d", &s, &e);
    while (s <= e)
    {
        if (s % 2 == 0)
            es += s;
        else
            os += s;
        s++;
    }
    printf("Even sum is %d and odd sum is %d", es, os);
    return 0;
}