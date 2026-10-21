#include<stdio.h>
#include<stdlib.h>
int main() {
    int a,b,c;
    printf("Enter three numbers for comparision:");
    scanf("%d %d %d", &a, &b, &c);
    int m=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Max is %d",m);
    return 0;
}