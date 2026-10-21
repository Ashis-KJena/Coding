#include<stdio.h>
#include<stdlib.h>
int main() {
    float c;
    printf("Enter the temperature in celsius:");
    scanf("%f", &c);
    float f= 9*c/5 + 32;
    printf("Converted fahrenheit value is:%f", f);
    return 0;
}