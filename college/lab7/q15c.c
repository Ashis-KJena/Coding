#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    float s=1;
    printf("Enter the limit:");
    scanf("%d", &n);
    printf("1 + ");
    for(i=2;i<=n;i++){
        printf("%d",i*i);
        s=s+(i*i);
        if(i<n)
        printf(" + ");
    }
    printf("\nSum is %.2f",s);
    return 0;
}