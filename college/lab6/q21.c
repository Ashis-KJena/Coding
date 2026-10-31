#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    printf("Enter the three sides of triangle:");
    scanf("%d %d %d", &a, &b, &c);
    ( b == c && c == a && a == b) ? (printf("Equilateral triangle")) : (printf("Non equilateral triangle"));
    return 0;
}