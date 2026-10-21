#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    float r;
    printf("Enter the radius of sphere:");
    scanf("%f", &r);
    float v=(4/3)*M_PI*pow(r,3);
    printf("Volume of sphere is %f.",v);
    return 0;
}