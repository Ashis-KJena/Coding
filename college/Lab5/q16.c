#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter a four digit number:");
    scanf("%d", &n);
    int a=n/1000;
    int b=n%1000;
    int c=b/100;
    int d=b%100;
    int e=d/10;
    int f=d%10;
    int s=a+c+e+f;
    printf("Sum of the digits is %d.",s);
    return 0;
}