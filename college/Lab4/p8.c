#include<stdio.h>
#include<stdlib.h>
int main() {
    int a,b,c;
    printf("Enter two different numbers:");
    scanf("%d %d", &a, &b);
    c=a,a=b,b=c;
    printf("The swapped numbers are %d and %d.", a,b);
    return 0;
}