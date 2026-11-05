#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, f;
    f = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n == i * i)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        printf("Perfect Square");
    else
        printf("Imperfect Square");
    return 0;
}