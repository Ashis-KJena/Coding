#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    printf("Enter the three sides of triangle:");
    scanf("%d %d %d", &a, &b, &c);
    (a + b >= c && b + c > a && c + a >= b) ? (printf("Valid triangle")) : (printf("Invalid triangle"));
    return 0;
}