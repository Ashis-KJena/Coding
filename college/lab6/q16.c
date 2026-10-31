#include <stdio.h>
#include <stdlib.h>
int main()
{
    float u, b;
    printf("Enter units:");
    scanf("%f", &u);
    if (u <= 100)
        b = u * 3.20;
    else if (u <= 300)
        b = 100 * 3.20 + (u - 100) * 5.40;
    else
        b = 100 * 3.20 + 200 * 5.40 + (u - 300) * 6;
    printf("bill is %.2f", b);
    return 0;
}