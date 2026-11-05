#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("Enter a number:");
    scanf("%d", &n);
    i=0;
    while(n != 0){
        n=n/10;
        i++;
    } 
    printf("Number of digit is %d", i);
    return 0;
}