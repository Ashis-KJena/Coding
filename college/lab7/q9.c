#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b,i,min,gcd;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    i=1;
    if(a<b)
    min=a;
    else
    min=b;
    while(i<=min){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
        i++;
    }
    printf("%d", gcd);
    return 0;
}