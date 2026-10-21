#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    float r,h;
    printf("Enter the radius of cylinder:");
    scanf("%f", &r);
    printf("Enter the height of cylinder:");
    scanf("%f", &h);
    float v=M_PI*pow(r,2)*h;
    printf("Volume of cylinder is %f",v);
    return 0;
}