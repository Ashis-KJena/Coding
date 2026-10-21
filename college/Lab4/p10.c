#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter a three digit number:");
    scanf("%d", &n);
    int a= n/100;
    int b=(n/10)%10;
    int c= n%10;
    int s=a+b+c;
    printf("Sum of the digits are: %d",s);
    return 0;
}
