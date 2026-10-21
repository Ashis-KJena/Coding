#include <stdio.h>
#include<stdlib.h>
#include <math.h>
int main() {
    int x1, y1, x2, y2;

    printf("Enter x coordinate of first point: ");
    scanf("%d", &x1);

    printf("Enter y coordinate of first point: ");
    scanf("%d", &y1);

    printf("Enter x coordinate of second point: ");
    scanf("%d", &x2);

    printf("Enter y coordinate of second point: ");
    scanf("%d", &y2);

    float s = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    float a = pow(s, 2);
    float p = 4*s;

    printf("Side of the square = %.0f\n", s);
    printf("AREA = %.0f  PERIMETER = %.0f",a,p);
    return 0;
}