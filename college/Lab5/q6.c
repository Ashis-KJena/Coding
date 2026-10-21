#include<stdio.h>
#include<stdlib.h>
int main() {
    int a,b,c,d,e,f;
    printf("Enter the quantity of item 1:");
    scanf("%d", &a);
    printf("Enter the amount of item 1:");
    scanf("%d", &b);
    printf("Enter the quantity of item 2:");
    scanf("%d", &c);
    printf("Enter the amount of item 2:");
    scanf("%d", &d);
    printf("Enter the quantity of item 3:");
    scanf("%d", &e);
    printf("Enter the amount of item 3:");
    scanf("%d", &f);
    int t=(a*b) + (c*d) + (e*f);
    printf("Total bill is %d rs.", t);
    return 0;
}