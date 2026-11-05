#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,s;
    s=0;
    do{
        printf("Enter number to add:");
    scanf("%d", &n);
    s+=n;
    }while(s<=100);
    printf("%d",s);
    return 0;
}