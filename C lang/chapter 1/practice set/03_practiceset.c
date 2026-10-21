/* Write a program to convert temperature from celsius to fahrenheit*/
#include <stdio.h>
int main() {
    float celsius;
    float fahrenheit;
    scanf("%f", &celsius);
    fahrenheit = ( celsius * 9/5) + 32;
    printf("The temperature in fahrenheit is: %f", fahrenheit);
    return 0;

}