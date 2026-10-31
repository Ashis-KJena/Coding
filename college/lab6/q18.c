#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x, y, a, b, r;
    printf("Enter the centre coordinates of a cirlce:");
    scanf("%d %d", &x, &y);
    printf("Enter raidus:");
    scanf("%d", &r);
    printf("Enter points to check:");
    scanf("%d %d", &a, &b);
    float d = pow((x - a), 2) + pow((y - b), 2);
    if (d < r * r)
        printf("Inside the circle");
    else if (d == r * r)
        printf("On the circle");
    else 
        printf("Outisde the cirlce");
    return 0;
}