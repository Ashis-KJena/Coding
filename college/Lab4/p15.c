#include<stdio.h>
#include<stdlib.h>
int main() {
    float a,b,c,d,e;
    printf("Enter your marks of 5 subjects:\n ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    float p=((a+b+c+d+e)/500)*100;
    printf("Your percentage is %f",p);
    return 0;
}