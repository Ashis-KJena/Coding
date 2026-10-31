#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    printf("Enter the three sides of triangle:");
    scanf("%d %d %d", &a, &b, &c);
    ((a*a+b*b==c*c) || (b*b+c*c==a*a) || (c*c+a*a==b*b)) ? (printf("Right angled triangle")) : (printf("Not a right angled triangle"));
    return 0;
}