#include<stdio.h>
#include<stdlib.h>
int main() {
    float f;
    printf("Enter the temperature in fahrenheit:");
    scanf("%f", &f);
    float c= (f-32)*5/9;
    printf("Celsius converted value is %f", c);
    return 0;
}