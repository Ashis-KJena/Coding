#include<stdio.h>
#include<stdlib.h>
int main() {
    int a,b;
    printf("Enter the values of two numbers: ");
    scanf("%d %d", &a, &b);
    int s=a+b;
    int d=a-b;
    int p=a*b;
    int r=a%b;
    int q=a/b;
    printf("%d + %d = %d.\n", a,b,s);
    printf("%d - %d = %d.\n", a,b,d);
    printf("%d * %d = %d.\n", a,b,p);
    printf("%d / %d = %d.\n", a,b,q);
    printf("%d %% %d = %d.\n", a,b,r);
    return 0;

}