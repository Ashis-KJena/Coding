#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    float s;
    printf("Enter the side value of a square:");
    scanf("%f", &s);
    float r= s/ sqrt(M_PI);
    printf("Radius of circle whose area is as same as cricle is %f", r);
    return 0;
}
