#include<stdio.h>
#include<stdlib.h>
int main() {
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);
   int l=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Largest number is %d.",l);
    return 0;
}