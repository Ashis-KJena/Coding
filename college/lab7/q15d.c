#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    float s = 0;
    printf("Enter end limit:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d/%d", i, i + 1);
        s = s + ((float)i / (i + 1));
        if (i < n)
            printf(" + ");
    }
    printf("\nSum is %.2f", s);
    return 0;
}