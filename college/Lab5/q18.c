#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int r;
    printf("Enter the radian value:");
    scanf("%d", &r);
    float d=(180/M_PI)*r;
    printf("Degree value is %f.",d);
    return 0;
}