#include<stdio.h>
#include<stdlib.h>
int main() {
    int p,r,t;
    printf("Enter principal:\n");
    scanf("%d", &p);
    printf("Enter the rate of intrest:\n");
    scanf("%d", &r);
    printf("Enter the time in years:\n");
    scanf("%d", &t);
    int s=p*r*t;
    printf("The SI calculated as: %d", s);
    return 0;
}