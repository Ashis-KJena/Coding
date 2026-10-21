/* Write a program to calculate SI for a set of values
representing principal, rate, and time */
#include <stdio.h>
int main() {
    float principal= 5000;
    float rate =8;
    float time = 25;
    float SI = (principal*rate*time)/100;
    printf("The simple interest for principal %f, rate %f and time %f is: %f", principal, rate, time, SI);
    return 0;

}