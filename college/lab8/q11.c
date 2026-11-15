//Reverse an arrray without using another array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,t;
    printf("Enter array size:");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<(n/2);i++){
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
    printf("New array:");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    return 0;
}