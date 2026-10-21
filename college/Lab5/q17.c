#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int d;
    printf("Enter degree value:");
    scanf("%d", &d);
    float r=(M_PI/180)*d;
    printf("Radian value is %f.", r);
    return 0;
}