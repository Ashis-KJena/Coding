#include<stdio.h>
#include<stdlib.h>
int main() {
    float s;
    printf("Enter your basic pay:");
    scanf("%f", &s);
    float d= 0.42*s;
    float h= 0.30*s;
    float f= s+d+h+2000;
    printf("Your gross salary becomes: %f", f);
    return 0;
}