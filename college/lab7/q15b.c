#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    float s = 1;
    printf("Enter the end limit:");
    scanf("%d", &n);
    printf("1 + ");
    for (i = 2; i <= n; i++)
    {
        printf("1/%d", i * i);
        s = s + (1.00 / (i * i));
        if (i < n)
            printf(" + ");
    }
    printf("\nsum is %.2f", s);
    return 0;
}