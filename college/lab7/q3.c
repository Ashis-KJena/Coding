#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,s;
    s=0;
    printf("Enter a number:");
    scanf("%d", &n);
    while(i != 0){
        i=n%10;
        s+=i;
        n=n/10;
    }
    printf("sum is %d",s);
    return 0;
}