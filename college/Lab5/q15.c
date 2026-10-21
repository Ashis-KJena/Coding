#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter a three digit number:");
    scanf("%d", &n);
    int a=n/100;
    int b=n%100;
    int c=b/10;
    int d=b%10;
    int r= (d*100)+(c*10)+(a);
    printf("Reversed number is %d.", r);
    return 0;
}