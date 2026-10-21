#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    int h=n/100;
    int t=(n/10)%10;
    int u=n%10;
    int sum= h+t+u;
    printf("The sum of the indivisual digits are %d", sum);
    return 0;
}
