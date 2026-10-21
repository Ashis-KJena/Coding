#include<stdio.h>
#include<stdlib.h>
int main() {
    int a,b;
    printf("Enter the value in 0 and 1 only\n");
    printf("Enter the value of A:");
    scanf(" %d", &a);
    printf("Enter the value of B:");
    scanf("%d", &b);
    switch (a&&b)
    {
        case 1: printf("Value is 1");
        break;
        default: printf("Value is 0");
        break;
    }
    return 0;
}