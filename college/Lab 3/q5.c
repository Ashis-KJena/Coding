/* Write a program to take a input of five numbers and find thier sum and average*/
#include<stdio.h>
#include<stdlib.h>
int main() {

    float a,b,c,d,e;
    printf("Enter the value of five numbers:");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    float s=a+b+c+d+e;
    float v=s/5;
    printf("sum of five numbers are %f.\n Average is %f", s, v);
    return 0;
}
