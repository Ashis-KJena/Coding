#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Ente a three digit number: ");
    scanf("%d", &n);
    int a= n/100;
    int b=n%100;
    int c=b/10;
    int d=b%10;
    int s=a+c+d;
    printf("The sum of the digits is %d", s);
    return 0;
}