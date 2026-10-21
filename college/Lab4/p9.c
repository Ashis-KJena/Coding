#include<stdio.h>
#include<stdlib.h>
int main() {
    int a,b;
    printf("Enter two different numbers:");
    scanf("%d %d", &a, &b);
    a=a+b, b=a-b, a=a-b;
    printf("Swapped numbers are %d and %d", a,b);
    return 0;
}
