#include<stdio.h>
#include<stdlib.h>
int main() {
    float a,b,c;
    printf("Enter three numbers:\n");
    scanf("%f %f %f", &a, &b, &c);
    float avg= (a+b+c)/3;
    printf("The average is %f", avg);
    return 0;
}
