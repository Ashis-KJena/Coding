#include<stdio.h>
#include<stdlib.h>
int main() {
    int a,b;
    printf("Enter two numbers for comparision:");
    scanf("%d %d", &a, &b);
    int m=(a>b)?a:b;
    printf("Maximum is %d",m);
    return 0;
}