#include<stdio.h>
#include<stdlib.h>
int main() {
    float b;
    printf("Enter the bill amount:");
    scanf("%f", &b);
    float f=(b>1000)?(0.95*b):(b);
    float t=f+0.12*f;
    printf("Final bill to be paid is %f",t);
    return 0;
}